from typing import Tuple, FrozenSet

from pysmt.environment import Environment as PysmtEnv
from pysmt.fnode import FNode
import pysmt.typing as types

from expr_utils import symb2next
from hint import Hint, Location


def transition_system(env: PysmtEnv) -> Tuple[FrozenSet[FNode],
                                              FNode, FNode, FNode]:
    assert isinstance(env, PysmtEnv)
    mgr = env.formula_manager
    pc = mgr.Symbol("pc", types.INT)
    x_pc = symb2next(env, pc)
    y = mgr.Symbol("y", types.INT)
    x_y = symb2next(env, y)

    symbols = frozenset([pc, y])

    m_1 = mgr.Int(-1)

    n_locs = 2
    max_int = 11
    ints = []
    pcs = []
    x_pcs = []
    for idx in range(n_locs):
        num = mgr.Int(idx)
        ints.append(num)
        pcs.append(mgr.Equals(pc, num))
        x_pcs.append(mgr.Equals(x_pc, num))

    for idx in range(n_locs, max_int):
        num = mgr.Int(idx)
        ints.append(num)

    pcend = mgr.Equals(pc, m_1)
    x_pcend = mgr.Equals(x_pc, m_1)

    init = pcs[0]
    cfg = []
    # pc = 0 & (y >= 0 & y <= 10) -> pc' = 1
    cond = mgr.And(mgr.GE(y, ints[0]), mgr.LE(y, ints[10]))
    cfg.append(mgr.Implies(mgr.And(pcs[0], cond), x_pcs[1]))
    # pc = 0 & !(y >= 0 & y <= 10) -> pc' = -1
    cfg.append(mgr.Implies(mgr.And(pcs[0], mgr.Not(cond)), x_pcend))
    # pc = 1 -> pc' = 0
    cfg.append(mgr.Implies(pcs[1], x_pcs[0]))
    # pc = -1 -> pc' = -1
    cfg.append(mgr.Implies(pcend, x_pcend))

    trans = []
    same = mgr.Equals(x_y, y)
    # pc = 0 -> same
    trans.append(mgr.Implies(pcs[0], same))
    # pc = 1 -> y' = (2 * y + 1) / 2
    expr = mgr.Div(mgr.Plus(mgr.Times(ints[2], y), ints[1]), ints[2])
    trans.append(mgr.Implies(pcs[1], mgr.Equals(x_y, expr)))
    # pc = end -> same
    trans.append(mgr.Implies(pcend, same))

    trans = mgr.And(*cfg, *trans)

    fairness = mgr.Not(mgr.Equals(pc, m_1))
    return symbols, init, trans, fairness


def hints(env: PysmtEnv) -> FrozenSet[Hint]:
    assert isinstance(env, PysmtEnv)

    mgr = env.formula_manager
    pc = mgr.Symbol("pc", types.INT)
    y = mgr.Symbol("y", types.INT)
    x_y = symb2next(env, y)
    symbs = frozenset([pc, y])

    i_1 = mgr.Int(1)
    i_2 = mgr.Int(2)
    expr = mgr.Div(mgr.Plus(mgr.Times(i_2, y), i_1), i_2)
    stutter = mgr.Equals(x_y, y)
    loc = Location(env, mgr.Equals(y, i_1), mgr.TRUE(), stutterT=stutter)
    loc.set_progress(0, mgr.Equals(x_y, expr))

    h_y = Hint("h_y", env, frozenset([y]), symbs)
    h_y.set_locs([loc])

    return frozenset([h_y])
