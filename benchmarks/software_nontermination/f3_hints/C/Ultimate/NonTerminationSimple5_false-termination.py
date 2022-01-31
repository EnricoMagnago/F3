from typing import Tuple, FrozenSet

from pysmt.environment import Environment as PysmtEnv
from pysmt.fnode import FNode
import pysmt.typing as types

from expr_utils import symb2next
from hint import Hint, Location


def transition_system(env: PysmtEnv) -> Tuple[FrozenSet[FNode], FNode, FNode,
                                              FNode]:
    assert isinstance(env, PysmtEnv)
    mgr = env.formula_manager
    pc = mgr.Symbol("pc", types.INT)
    x_pc = symb2next(env, pc)
    x = mgr.Symbol("x", types.INT)
    x_x = symb2next(env, x)

    symbols = frozenset([pc, x])

    m_1 = mgr.Int(-1)

    n_locs = 4
    ints = [mgr.Int(idx) for idx in range(4)]
    pcs = []
    x_pcs = []
    for idx in range(n_locs):
        num = ints[idx]
        pcs.append(mgr.Equals(pc, num))
        x_pcs.append(mgr.Equals(x_pc, num))
    pcend = mgr.Equals(pc, m_1)
    x_pcend = mgr.Equals(x_pc, m_1)

    init = pcs[0]
    cfg = []
    # pc = 0 & x >= 0 -> pc' = 1
    cfg.append(mgr.Implies(mgr.And(pcs[0], mgr.GE(x, ints[0])), x_pcs[1]))
    # pc = 0 & !(x >= 0) -> pc' = -1
    cfg.append(mgr.Implies(mgr.And(pcs[0], mgr.Not(mgr.GE(x, ints[0]))),
                           x_pcend))
    # pc = 1 -> pc' = 2 | pc' = 3
    cfg.append(mgr.Implies(pcs[1], mgr.Or(x_pcs[2], x_pcs[3])))
    # pc = 2 -> pc' = 0
    cfg.append(mgr.Implies(pcs[2], x_pcs[0]))
    # pc = 3 -> pc' = 0
    cfg.append(mgr.Implies(pcs[3], x_pcs[0]))
    # pc = -1 -> pc' = -1
    cfg.append(mgr.Implies(pcend, x_pcend))

    trans = []
    # pc = 0 -> x' = x
    trans.append(mgr.Implies(pcs[0], mgr.Equals(x_x, x)))
    # pc = 1 -> x' = x
    trans.append(mgr.Implies(pcs[1], mgr.Equals(x_x, x)))
    # pc = 2 -> x' = x - 1
    trans.append(mgr.Implies(pcs[2], mgr.Equals(x_x, mgr.Minus(x, ints[1]))))
    # pc = 3 -> x' = x + 1
    trans.append(mgr.Implies(pcs[3], mgr.Equals(x_x, mgr.Plus(x, ints[1]))))
    # pc = end -> x' = x
    trans.append(mgr.Implies(pcend, mgr.Equals(x_x, x)))

    trans = mgr.And(*cfg, *trans)

    fairness = mgr.Not(mgr.Equals(pc, m_1))
    return symbols, init, trans, fairness


def hints(env: PysmtEnv) -> FrozenSet[Hint]:
    assert isinstance(env, PysmtEnv)

    mgr = env.formula_manager
    pc = mgr.Symbol("pc", types.INT)
    x = mgr.Symbol("x", types.INT)
    symbs = frozenset([pc, x])

    x_x = symb2next(env, x)
    i_0 = mgr.Int(0)
    i_1 = mgr.Int(1)
    stutter = mgr.Equals(x_x, x)
    l0 = Location(env, mgr.Equals(x, i_0), mgr.TRUE(), stutterT=stutter)
    l0.set_progress(1, mgr.Equals(x_x, mgr.Plus(x, i_1)))
    l1 = Location(env, mgr.Equals(x, i_1), mgr.TRUE(), stutterT=stutter)
    l1.set_progress(0, mgr.Equals(x_x, mgr.Minus(x, i_1)))
    h_x = Hint("h_x", env, frozenset([x]), symbs)
    h_x.set_locs([l0, l1])

    return frozenset([h_x])
