from typing import Tuple, FrozenSet
from pysmt.environment import Environment as PysmtEnv
from pysmt.fnode import FNode
import pysmt.typing as types

from expr_utils import symb2next


def transition_system(env: PysmtEnv) -> Tuple[FrozenSet[FNode], FNode, FNode, FNode]:
    assert isinstance(env, PysmtEnv)
    mgr = env.formula_manager
    pc = mgr.Symbol("pc", types.INT)
    x = mgr.Symbol("x", types.INT)
    y = mgr.Symbol("y", types.INT)
    x_pc = symb2next(env, pc)
    x_x = symb2next(env, x)
    x_y = symb2next(env, y)

    symbols = frozenset([pc, x, y])

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
    # pc = 0 & (x > 0 & y > 0) -> pc' = 1
    cond = mgr.And(mgr.GT(x, ints[0]), mgr.GT(y, ints[0]))
    cfg.append(mgr.Implies(mgr.And(pcs[0], cond), x_pcs[1]))
    # pc = 0 & !(x > 0 & y > 0) -> pc' = -1
    cfg.append(mgr.Implies(mgr.And(pcs[0], mgr.Not(cond)), x_pcend))
    # pc = 1 -> pc' = 0
    cfg.append(mgr.Implies(pcs[1], x_pcs[0]))
    # pc = -1 -> pc' = -1
    cfg.append(mgr.Implies(pcend, x_pcend))

    trans = []
    same_x = mgr.Equals(x_x, x)
    same_y = mgr.Equals(x_y, y)
    same = mgr.And(same_x, same_y)

    # pc = 0 -> same
    trans.append(mgr.Implies(pcs[0], same))
    # pc = 1 -> x' = 10y - 2x & same_y
    trans.append(mgr.Implies(pcs[1],
                             mgr.And(mgr.Equals(x_x,
                                                mgr.Minus(mgr.Times(ints[10],
                                                                    y),
                                                          mgr.Times(ints[2],
                                                                    x))),
                                     same_y)))
    # pc = end -> same
    trans.append(mgr.Implies(pcend, same))

    trans = mgr.And(*cfg, *trans)

    fairness = mgr.Not(mgr.Equals(pc, m_1))

    return symbols, init, trans, fairness
