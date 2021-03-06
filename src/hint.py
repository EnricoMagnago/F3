from __future__ import annotations
from typing import Optional, Tuple, List, FrozenSet, Dict, Iterator
from enum import IntEnum, unique
from itertools import chain

from pysmt.environment import Environment as PysmtEnv
import pysmt.typing as types
from pysmt.fnode import FNode
from pysmt.exceptions import SolverReturnedUnknownResultError

from rankfun import RankFun
from multisolver import MultiSolver
from efsolver import efesolve
from expr_utils import symb_is_curr, symb2next, to_next, new_enum
from trans_system import TransSystem
from canonize import Canonizer
from expr_at_time import ExprAtTime
# from generalise import Generaliser

_TIMEOUT = 20


def set_timeout(val: int) -> None:
    assert isinstance(val, int)
    global _TIMEOUT
    _TIMEOUT = val


def get_timeout() -> int:
    global _TIMEOUT
    return _TIMEOUT


@unique
class TransType(IntEnum):
    PROGRESS = 0
    STUTTER = 1
    RANKED = 2


class Location():
    """Represents a location of an hint:
    - region: condition ensured by entering transitions.
    - assumption: condition that must be ensured by environment.
    - ranking function: bounds number of repetitions of ranking transition.
    - stuttering transition: self-loop on location with constant ranking function.
    - ranked transition: self-loop on location with decreasing ranking function.
    - progress: <idx, prog0, prog1> index of next location.
    """

    def __init__(self, env: PysmtEnv, region: FNode,
                 assume: Optional[FNode] = None,
                 stutterT: Optional[FNode] = None,
                 rankT: Optional[FNode] = None,
                 rf: Optional[RankFun] = None,
                 progressT: Optional[Dict[int, FNode]] = None):
        assert isinstance(env, PysmtEnv)
        assert isinstance(region, FNode)
        assert region in env.formula_manager.formulae.values()
        assert assume is None or isinstance(assume, FNode)
        assert assume is None or assume in env.formula_manager.formulae.values()
        assert stutterT is None or isinstance(stutterT, FNode)
        assert stutterT is None or stutterT in env.formula_manager.formulae.values()
        assert rankT is None or isinstance(rankT, FNode)
        assert rankT is None or rankT in env.formula_manager.formulae.values()
        assert rf is None or isinstance(rf, RankFun)
        assert rf is None or rf.env == env

        mgr = env.formula_manager
        self.env = env
        self.region = region
        self.assume = assume if assume is not None else mgr.TRUE()
        self.stutterT = stutterT if stutterT else mgr.FALSE()
        self.rankT = rankT if rankT else mgr.FALSE()
        self.rf = rf
        self.progressT = progressT if progressT is not None else {}

    @property
    def ranked_region(self) -> FNode:
        mgr = self.env.formula_manager
        if self.rf is None:
            return mgr.FALSE()
        return mgr.And(self.region, self.rf.is_ranked())

    @property
    def minrf_region(self) -> FNode:
        if self.rf is None:
            return self.region
        mgr = self.env.formula_manager
        return mgr.And(self.region, self.rf.is_min())

    @property
    def dsts(self) -> FrozenSet[int]:
        assert isinstance(self.progressT, dict)
        assert all(isinstance(k, int) for k in self.progressT)
        return frozenset(self.progressT.keys())

    def set_rank(self, trans: FNode, rf: RankFun) -> None:
        assert isinstance(trans, FNode)
        assert trans in self.env.formula_manager.formulae.values()
        assert isinstance(rf, RankFun)
        assert rf.env == self.env
        assert rf.expr in self.env.formula_manager.formulae.values()
        self._rankT = trans
        self._rf = rf

    def progress(self, dst: int) -> Optional[FNode]:
        """Return progress transition reaching location dst"""
        return self.progressT.get(dst)

    def set_progress(self, dst: int, t: FNode) -> None:
        assert isinstance(dst, int)
        assert dst >= 0
        assert isinstance(t, FNode)
        assert t in self.env.formula_manager.formulae.values()
        if t.is_false():
            self.progressT.pop(t, None)
        else:
            self.progressT[dst] = t

    def get_trans(self, idx: int, lvals: List[FNode], x_lvals: List[FNode],
                  symbs: FrozenSet[FNode], locs: List[Location],
                  is_stutter: FNode, is_ranked: FNode,
                  is_progress: FNode, is_rank_decr: FNode) -> Iterator[FNode]:
        assert isinstance(idx, int)
        assert isinstance(lvals, list)
        assert all(isinstance(val, FNode) for val in lvals)
        assert all(val in self.env.formula_manager.formulae.values()
                   for val in lvals)
        assert isinstance(x_lvals, list)
        assert all(isinstance(val, FNode) for val in x_lvals)
        assert all(val in self.env.formula_manager.formulae.values()
                   for val in x_lvals)
        assert isinstance(symbs, frozenset)
        assert all(isinstance(s, FNode) for s in symbs)
        assert all(s in self.env.formula_manager.get_all_symbols()
                   for s in symbs)
        assert isinstance(locs, list)
        assert all(isinstance(loc, Location) for loc in locs)
        assert isinstance(is_stutter, FNode)
        assert is_stutter in self.env.formula_manager.formulae.values()
        assert not is_stutter.is_false()
        assert isinstance(is_ranked, FNode)
        assert is_ranked in self.env.formula_manager.formulae.values()
        assert self.rf is None or not is_ranked.is_false()
        assert isinstance(is_progress, FNode)
        assert is_progress in self.env.formula_manager.formulae.values()
        assert not is_progress.is_false()
        assert isinstance(is_rank_decr, FNode)
        assert is_rank_decr.is_false() or is_rank_decr.is_symbol()
        assert is_rank_decr in self.env.formula_manager.formulae.values()
        assert not is_ranked.is_false() or is_rank_decr.is_false()
        assert is_ranked.is_false() or not is_rank_decr.is_false()

        mgr = self.env.formula_manager
        # cfg: loc -> \/ (x_loc & \/ trans_types)
        x_locs = []
        t_type = []
        if not self.stutterT.is_false():
            t_type.append(is_stutter)
        min_rf = None
        if not self.rankT.is_false():
            assert not is_ranked.is_false()
            assert self.rf is not None
            t_type.append(mgr.And(is_ranked, self.rf.is_ranked()))
            min_rf = self.rf.is_min()
        if self.progress(idx) is not None:
            t_type.append(mgr.And(is_progress, min_rf) if min_rf is not None
                          else is_progress)
        x_locs.append(mgr.And(x_lvals[idx], mgr.Or(t_type)))

        for dst in (dst for dst in self.progressT if dst != idx):
            if min_rf is None:
                x_locs.append(mgr.And(x_lvals[dst], is_progress))
            else:
                x_locs.append(mgr.And(x_lvals[dst], is_progress, min_rf))

        yield mgr.Implies(lvals[idx], mgr.Or(x_locs))
        del x_locs, t_type

        # loc & loc' & is_stutter -> stutterT & rf' = rf
        if not self.stutterT.is_false():
            yield mgr.Implies(mgr.And(lvals[idx], x_lvals[idx], is_stutter),
                              mgr.And(self.stutterT, self.rf.is_const())
                              if self.rf is not None else self.stutterT)

        # loc & loc' & is_ranked -> rankT & rf' < rf
        if not self.rankT.is_false():
            assert not is_ranked.is_false()
            assert self.rf is not None
            yield mgr.Implies(mgr.And(lvals[idx], x_lvals[idx], is_ranked),
                              mgr.And(self.rankT, self.rf.is_ranked(),
                                      self.rf.is_decr()))

        # loc & loc' & is_progress -> progressT
        for dst, progress_t in self.progressT.items():
            assert progress_t is not None
            assert not progress_t.is_false()
            yield mgr.Implies(mgr.And(lvals[idx], x_lvals[dst], is_progress),
                              progress_t)

        if not is_rank_decr.is_false() and not is_ranked.is_false():
            assert self.rf is not None
            x_is_rank_decr = symb2next(self.env, is_rank_decr)
            # loc & is_rank_decr & rf > 0 -> x_is_rank_decr
            yield mgr.Implies(mgr.And(lvals[idx], is_rank_decr,
                                      self.rf.is_ranked()),
                              x_is_rank_decr)
            # loc & is_rank_decr & rf = 0 -> !x_is_rank_dect
            yield mgr.Implies(mgr.And(lvals[idx], is_rank_decr,
                                      self.rf.is_min()),
                              mgr.Not(x_is_rank_decr))

    def to_env(self, new_env: PysmtEnv) -> Location:
        """Return copy of self in the give environment"""
        assert isinstance(new_env, PysmtEnv)

        norm = new_env.formula_manager.normalize
        return Location(new_env, norm(self.region), norm(self.assume),
                        stutterT=norm(self.stutterT),
                        rankT=norm(self.rankT),
                        rf=self.rf.to_env(new_env) if self.rf is not None
                        else None,
                        progressT={idx: norm(prog_t)
                                   for idx, prog_t in self.progressT.items()})


class Hint():
    """Transition system associated with:
    sequence of regions, assumptions and ranking functions.
    Represented as list of locations.
    """

    @staticmethod
    def disjoint_symbs(env: PysmtEnv, hints: List[Hint],
                       active: List[FNode]) -> Iterator[FNode]:
        """Return formulae that constrain active hints to have disjoint symbols"""
        assert isinstance(env, PysmtEnv)
        assert isinstance(hints, list)
        assert isinstance(active, list)
        assert all(isinstance(h, Hint) for h in hints)
        assert all(h.env == env for h in hints)
        assert all(isinstance(p, FNode) for p in active)
        assert all(p in env.formula_manager.formulae.values()
                   for p in active)
        assert len(hints) == len(active)
        mgr = env.formula_manager
        for idx, (h0, h0_active) in enumerate(zip(hints, active)):
            h_lst = []
            for h1, h1_active in zip(hints[idx + 1:], active[idx + 1:]):
                if len(h0.owned_symbs & h1.owned_symbs) > 0:
                    h_lst.append(h1_active)
            if len(h_lst) > 0:
                yield mgr.Implies(h0_active,
                                  mgr.And(mgr.Not(p) for p in h_lst))

    @staticmethod
    def at_most_1_ranked(env: PysmtEnv, hints: List[Hint],
                         active: List[FNode]) -> Iterator[FNode]:
        """Return sequence of formulae that allow at most 1
        ranking function at a time"""
        assert isinstance(env, PysmtEnv)
        assert isinstance(hints, list)
        assert all(isinstance(h, Hint) for h in hints)
        assert all(h.env == env for h in hints)
        assert isinstance(active, list)
        assert all(isinstance(p, FNode) for p in active)
        assert all(p in env.formula_manager.formulae.values()
                   for p in active)
        mgr = env.formula_manager
        for h in hints:
            assert h.t_is_stutter is not None
            assert h.t_is_ranked is not None
            assert h.is_rank_decr is not None
            if h.t_is_ranked.is_false():
                continue
            assert not h.is_rank_decr.is_false()
            yield mgr.Implies(mgr.Or(h.t_is_ranked, h.is_rank_decr),
                              mgr.And(o.t_is_stutter for o in hints if o != h))

    def __init__(self, name: str, env: PysmtEnv,
                 owned_symbs: FrozenSet[FNode],
                 all_symbs: FrozenSet[FNode]):
        assert isinstance(name, str)
        assert len(name) > 0
        assert isinstance(env, PysmtEnv)
        assert isinstance(owned_symbs, frozenset)
        assert all(isinstance(s, FNode) for s in owned_symbs)
        assert all(s in env.formula_manager.get_all_symbols()
                   for s in owned_symbs)
        assert all(symb_is_curr(s) for s in owned_symbs)
        assert isinstance(all_symbs, frozenset)
        assert all(isinstance(s, FNode) for s in all_symbs)
        assert all(s in env.formula_manager.get_all_symbols()
                   for s in all_symbs)
        assert all(symb_is_curr(s) for s in all_symbs)
        assert owned_symbs <= all_symbs

        self.name = name
        self.env = env
        self.owned_symbs = owned_symbs
        self.all_symbs = all_symbs
        self.locs: List[Location] = []
        self.ts_loc_symbs = None
        self.ts_lvals = None
        self.trans_type_symbs = None
        self.t_is_stutter = None
        self.t_is_ranked = None
        self.t_progress = None
        self.is_rank_decr = None

    def __str__(self) -> str:
        return self.name

    def __len__(self) -> int:
        return len(self.locs)

    def __getitem__(self, idx: int) -> Location:
        assert isinstance(idx, int)
        assert idx >= 0
        assert idx < len(self)
        return self.locs[idx]

    def __iter__(self) -> Iterator[Location]:
        assert isinstance(self.locs, list)
        assert all(isinstance(loc, Location) for loc in self.locs)
        return iter(self.locs)

    def add(self, loc: Location) -> None:
        assert self.ts_loc_symbs is None
        assert self.ts_lvals is None
        self.locs.append(loc)

    def set_locs(self, locs: List[Location]):
        assert isinstance(locs, list)
        assert all(isinstance(loc, Location) for loc in locs)
        assert all(loc.env == self.env for loc in locs)
        assert self.ts_loc_symbs is None
        assert self.ts_lvals is None
        self.locs = locs

    def get_trans_system(self, active: FNode) -> Tuple[TransSystem,
                                                       FNode]:
        """Return encoding of Hint as an activable transition system:
        Transition system with flag to enable/disable.
        Return <set of newly introduced symbols, Init, Trans, active>
        """
        assert isinstance(active, FNode)
        assert active in self.env.formula_manager.get_all_symbols()

        mgr = self.env.formula_manager
        if self.ts_loc_symbs is None:
            assert self.ts_lvals is None
            self.ts_loc_symbs, self.ts_lvals = new_enum(self.env,
                                                        f"{self.name}_",
                                                        len(self) + 1)
            assert len(self.ts_lvals) == len(self) + 1
            self.trans_type_symbs, trans_type_vals = new_enum(
                self.env, f"{self.name}_type_", len(TransType))
            assert len(trans_type_vals) == len(TransType)
            assert len(TransType) == 3
            (self.t_is_stutter, self.t_is_ranked,
             self.t_is_progress) = trans_type_vals
        assert self.ts_loc_symbs is not None
        assert self.ts_lvals is not None
        assert self.trans_type_symbs is not None
        assert self.t_is_stutter is not None
        assert self.t_is_ranked is not None
        assert self.t_is_progress is not None

        symbs = set(chain(self.ts_loc_symbs, self.trans_type_symbs))
        symbs.add(active)
        if all(loc.rf is None for loc in self):
            assert all(loc.rankT.is_false() for loc in self)
            self.t_is_ranked = mgr.FALSE()
            self.is_rank_decr = mgr.FALSE()
        else:
            self.is_rank_decr = mgr.Symbol(f"_{self.name}_dec_rank", types.BOOL)
            symbs.add(self.is_rank_decr)
        lvals = self.ts_lvals
        x_lvals = [to_next(self.env, lval, symbs) for lval in lvals]
        symbs = frozenset.union(self.all_symbs, symbs)
        res = TransSystem(self.env, symbs, [], [])
        inactive = lvals[-1]
        x_inactive = x_lvals[-1]
        x_t_is_stutter = to_next(self.env, self.t_is_stutter, symbs)
        # invar: loc = i -> region(i) & assume(i)
        res.ext_init(mgr.Implies(l_val, mgr.And(loc.region, loc.assume))
                     for l_val, loc in zip(lvals, self.locs))
        # invar: inactive | (\/ loc = i)
        res.add_init(mgr.Or(lvals))
        res.ext_trans(to_next(self.env, pred, symbs) for pred in res.init)

        n_active = mgr.Not(active)
        # init: ! active -> inactive & trans_type = stutter
        res.add_init(mgr.Implies(n_active, mgr.And(inactive, self.t_is_stutter)))
        if not self.is_rank_decr.is_false():
            res.add_init(mgr.Iff(self.is_rank_decr, self.t_is_ranked))
        # trans: ! active -> inactive' & t_is_stutter'
        res.add_trans(mgr.Implies(n_active, mgr.And(x_inactive, x_t_is_stutter)))
        if not self.is_rank_decr.is_false():
            x_is_rank_decr = symb2next(self.env, self.is_rank_decr)
            # is_ranked -> x_is_rank_decr
            res.add_trans(mgr.Implies(self.t_is_ranked, x_is_rank_decr))
            # x_is_rank_decr -> rank_decr | is_ranked
            res.add_trans(mgr.Implies(x_is_rank_decr, mgr.Or(self.is_rank_decr,
                                                             self.t_is_ranked)))
        res.ext_trans(chain.from_iterable(
            loc.get_trans(idx, lvals, x_lvals, symbs, self.locs,
                          self.t_is_stutter, self.t_is_ranked,
                          self.t_is_progress, self.is_rank_decr)
            for idx, loc in enumerate(self.locs)))

        return res, mgr.Not(inactive)

    def to_env(self, new_env: PysmtEnv) -> Hint:
        """Return copy of self in the give environment"""
        assert isinstance(new_env, PysmtEnv)

        norm = new_env.formula_manager.normalize
        res = Hint(self.name, new_env,
                   frozenset(norm(s) for s in self.owned_symbs),
                   frozenset(norm(s) for s in self.all_symbs))
        res.set_locs([loc.to_env(new_env) for loc in self.locs])
        return res

    # def is_correct(self) -> Tuple[Optional[bool], List[str]]:
    #     """Returns true iff current hint satisfies all required hypotheses.
    #     In case some property is violated, the string contains a description
    #     of the error."""
    #     # Check indexes.
    #     for src_idx, src_l in enumerate(self):
    #         for dst_idx in src_l.dsts:
    #             if dst_idx >= len(self):
    #                 return False, [f"unknown destination {dst_idx} of "
    #                                f"{src_idx}: out of bound"]
    #     generalise = Generaliser(self.env, Canonizer(env=self.env),
    #                              ExprAtTime(env=self.env))
    #     msgs = []
    #     correct = True
    #     for check in [self._is_stutter_correct,
    #                   self._is_rank_correct,
    #                   self._is_progress_correct]:
    #         res, msg = check(generalise=generalise)
    #         if not res:
    #             correct = correct if correct is False else res
    #             msgs.append(msg)
    #     return correct, msgs

    def _is_stutter_correct(self, generalise=None) -> Tuple[Optional[bool],
                                                            Optional[str]]:
        """Check stutter transition of every location."""
        mgr = self.env.formula_manager
        other_symbs = self.all_symbs - self.owned_symbs
        x_own_symbs = frozenset(symb2next(self.env, s)
                                for s in self.owned_symbs)
        x_other_symbs = frozenset(symb2next(self.env, s)
                                  for s in other_symbs)
        for src_idx, src_l in enumerate(self):
            region = src_l.region
            x_region = to_next(self.env, region, self.all_symbs)
            assume = src_l.assume
            x_assume = to_next(self.env, assume, self.all_symbs)
            stutterT = src_l.stutterT
            if src_l.rf is not None:
                stutterT = mgr.And(stutterT, src_l.rf.is_const())
            exists = False
            with MultiSolver(self.env, get_timeout(),
                             solver_names=["msat"]) as solver:
                solver.add_assertions([region, assume, stutterT,
                                       x_region, x_assume])
                try:
                    exists = solver.solve()
                except SolverReturnedUnknownResultError:
                    return None, f"{self.name}: stutter on {src_idx} might be empty"
            if exists:
                constr = mgr.Implies(mgr.And(region, assume, x_assume),
                                     mgr.And(stutterT, x_region))
                model, _ = efesolve(self.env, self.all_symbs, x_own_symbs,
                                    x_other_symbs,
                                    mgr.Not(constr),
                                    generalise=generalise)
                if model is None:
                    return None, f"{self.name}: stutter condition on {src_idx} unknown"
                if model is not False:
                    return False, f"{self.name}: stutter condition on {src_idx} violated"
        return True, None

    def _is_rank_correct(self, generalise=None) -> Tuple[Optional[bool],
                                                         Optional[str]]:
        """Check ranked transition for every location."""
        mgr = self.env.formula_manager
        other_symbs = self.all_symbs - self.owned_symbs
        x_own_symbs = frozenset(symb2next(self.env, s)
                                for s in self.owned_symbs)
        x_other_symbs = frozenset(symb2next(self.env, s)
                                  for s in other_symbs)
        for src_idx, src_l in enumerate(self):
            if src_l.rf is None:
                continue
            x_region = to_next(self.env, src_l.region, self.all_symbs)
            region = src_l.ranked_region
            assume = src_l.assume
            x_assume = to_next(self.env, assume, self.all_symbs)
            rankT = mgr.And(src_l.rankT, src_l.rf.is_decr())

            exists = False
            with MultiSolver(self.env, get_timeout(),
                             solver_names=["msat"]) as solver:
                solver.add_assertions([region, assume, rankT,
                                       x_region, x_assume])
                try:
                    exists = solver.solve()
                except SolverReturnedUnknownResultError:
                    return None, f"{self.name}: ranked trans on {src_idx} might be empty"
            if exists:
                constr = mgr.Implies(mgr.And(region, assume, x_assume),
                                     mgr.And(rankT, x_region))
                model, _ = efesolve(self.env, self.all_symbs, x_own_symbs,
                                    x_other_symbs,
                                    mgr.Not(constr),
                                    generalise=generalise)
                if model is None:
                    return None, f"{self.name}: ranked condition on {src_idx} unknown"
                if model is not False:
                    return False, f"{self.name}: ranked condition on {src_idx} violated"
        return True, None

    def _is_progress_correct(self, generalise=None) -> Tuple[Optional[bool],
                                                             Optional[str]]:
        """Check progress transitions reaching."""
        mgr = self.env.formula_manager
        other_symbs = self.all_symbs - self.owned_symbs
        x_own_symbs = frozenset(symb2next(self.env, s)
                                for s in self.owned_symbs)
        x_other_symbs = frozenset(symb2next(self.env, s)
                                  for s in other_symbs)
        for src_idx, src_l in enumerate(self):
            src = [src_l.region, src_l.assume]
            if src_l.rf is not None:
                src.append(mgr.Not(src_l.rf.is_ranked()))
            src = mgr.And(src)
            for dst_idx in src_l.dsts:
                progressT = src_l.progress(dst_idx)
                dst_l = self[dst_idx]
                x_region = to_next(self.env, dst_l.region, self.all_symbs)
                x_assume = to_next(self.env, dst_l.assume, self.all_symbs)
                exists = False
                with MultiSolver(self.env, get_timeout(),
                                 solver_names=["msat"]) as solver:
                    solver.add_assertions([src, progressT, x_region,
                                           x_assume])
                    try:
                        exists = solver.solve()
                    except SolverReturnedUnknownResultError:
                        return None, "{self.name}: progress trans " \
                            f"{src_idx} - {dst_idx} might be empty"
                if exists:
                    constr = mgr.Implies(mgr.And(src, x_assume),
                                         mgr.And(progressT, x_region))
                    model, _ = efesolve(self.env, self.all_symbs, x_own_symbs,
                                        x_other_symbs,
                                        mgr.Not(constr),
                                        generalise=generalise)
                    if model is None:
                        return None, f"{self.name}: progress condition " \
                            f"{src_idx} -> {dst_idx} validity unknown"
                    if model is not False:
                        return False, f"{self.name}: progress condition " \
                            f"{src_idx} -> {dst_idx} violated"
        return True, None
