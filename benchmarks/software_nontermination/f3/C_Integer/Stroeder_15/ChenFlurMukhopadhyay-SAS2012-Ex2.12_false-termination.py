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
    oldx = mgr.Symbol("oldx", types.INT)
    x_pc = symb2next(env, pc)
    x_x = symb2next(env, x)
    x_y = symb2next(env, y)
    x_oldx = symb2next(env, oldx)

    symbols = frozenset([pc, x, y, oldx])

    m_1 = mgr.Int(-1)

    n_locs = 4
    max_int = 6
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
    # pc = 0 & x < 5 -> pc' = 1
    cond = mgr.LT(x, ints[5])
    cfg.append(mgr.Implies(mgr.And(pcs[0], cond), x_pcs[1]))
    # pc = 0 & !(x < 5) -> pc' = -1
    cfg.append(mgr.Implies(mgr.And(pcs[0], mgr.Not(cond)), x_pcend))
    # pc = 1 -> pc' = 2
    cfg.append(mgr.Implies(pcs[1], x_pcs[2]))
    # pc = 2 -> pc' = 3
    cfg.append(mgr.Implies(pcs[2], x_pcs[3]))
    # pc = 3 -> pc' = 0
    cfg.append(mgr.Implies(pcs[3], x_pcs[0]))
    # pc = -1 -> pc' = -1
    cfg.append(mgr.Implies(pcend, x_pcend))

    trans = []
    same_x = mgr.Equals(x_x, x)
    same_y = mgr.Equals(x_y, y)
    same_oldx = mgr.Equals(x_oldx, oldx)
    same = mgr.And(same_x, same_y, same_oldx)

    # pc = 0 -> same
    trans.append(mgr.Implies(pcs[0], same))
    # pc = 1 -> same_x & same_y & oldx' = x
    trans.append(mgr.Implies(pcs[1],
                             mgr.And(same_x, same_y,
                                     mgr.Equals(x_oldx, x))))
    # pc = 2 -> x' = oldx - y & same_y & same_oldx
    trans.append(mgr.Implies(pcs[2],
                             mgr.And(mgr.Equals(x_x, mgr.Minus(oldx, y)),
                                     same_y, same_oldx)))
    # pc = 3 -> same_x & y' = oldx + y & same_oldx
    trans.append(mgr.Implies(pcs[3],
                             mgr.And(same_x,
                                     mgr.Equals(x_y, mgr.Plus(oldx, y)),
                                     same_oldx)))
    # pc = end -> same
    trans.append(mgr.Implies(pcend, same))

    trans = mgr.And(*cfg, *trans)

    fairness = mgr.Not(mgr.Equals(pc, m_1))

    return symbols, init, trans, fairness
