from typing import Tuple, FrozenSet
from pysmt.environment import Environment as PysmtEnv
from pysmt.fnode import FNode
import pysmt.typing as types

from expr_utils import symb2next


def transition_system(env: PysmtEnv) -> Tuple[FrozenSet[FNode], FNode, FNode, FNode]:
    assert isinstance(env, PysmtEnv)
    mgr = env.formula_manager
    a = mgr.Symbol("a", types.INT)
    b = mgr.Symbol("b", types.INT)
    pc = mgr.Symbol("pc", types.INT)
    x = mgr.Symbol("x", types.INT)
    y = mgr.Symbol("y", types.INT)
    z = mgr.Symbol("z", types.INT)
    x_a = symb2next(env, a)
    x_b = symb2next(env, b)
    x_pc = symb2next(env, pc)
    x_x = symb2next(env, x)
    x_y = symb2next(env, y)
    x_z = symb2next(env, z)
    symbols = frozenset([a, b, pc, x, y, z])

    n_locs = 10
    int_bound = n_locs
    pcs = []
    x_pcs = []
    ints = []

    for l in range(n_locs):
        n = mgr.Int(l)
        ints.append(n)
        pcs.append(mgr.Equals(pc, n))
        x_pcs.append(mgr.Equals(x_pc, n))

    for l in range(n_locs, int_bound):
        ints.append(mgr.Int(l))

    m_1 = mgr.Int(-1)
    pcend = mgr.Equals(pc, m_1)
    x_pcend = mgr.Equals(x_pc, m_1)

    # initial location.
    init = pcs[0]

    # control flow graph.
    cfg = mgr.And(
        # pc = -1 : -1,
        mgr.Implies(pcend, x_pcend),
        # pc = 0 & !(z >= 4) : -1,
        mgr.Implies(mgr.And(pcs[0], mgr.Not(mgr.GE(z, ints[4]))),
                    x_pcend),
        # pc = 0 & z >= 4 : 1,
        mgr.Implies(mgr.And(pcs[0], mgr.GE(z, ints[4])), x_pcs[1]),
        # pc = 1 : 2,
        mgr.Implies(pcs[1], x_pcs[2]),
        # pc = 2 & x >= 0 : 3,
        mgr.Implies(mgr.And(pcs[2], mgr.GE(x, ints[0])), x_pcs[3]),
        # pc = 2 & !(x >= 0) : 4,
        mgr.Implies(mgr.And(pcs[2], mgr.Not(mgr.GE(x, ints[0]))),
                    x_pcs[4]),
        # pc = 3 : 5,
        mgr.Implies(pcs[3], x_pcs[5]),
        # pc = 4 : 5,
        mgr.Implies(pcs[4], x_pcs[5]),
        # pc = 5 & !(y >= 2) : -1,
        mgr.Implies(mgr.And(pcs[5], mgr.Not(mgr.GE(y, ints[2]))),
                    x_pcend),
        # pc = 5 & y >= 2 : 6,
        mgr.Implies(mgr.And(pcs[5], mgr.GE(y, ints[2])), x_pcs[6]),
        # pc = 6 & !(x >= 0) : -1,
        mgr.Implies(mgr.And(pcs[6], mgr.Not(mgr.GE(x, ints[0]))),
                    x_pcend),
        # pc = 6 & x >= 0 : 7,
        mgr.Implies(mgr.And(pcs[6], mgr.GE(x, ints[0])), x_pcs[7]),
        # pc = 7 : 8,
        mgr.Implies(pcs[7], x_pcs[8]),
        # pc = 8 : 9,
        mgr.Implies(pcs[8], x_pcs[9]),
        # pc = 9 : 6,
        mgr.Implies(pcs[9], x_pcs[6])
    )

    # transition labels.
    labels = mgr.And(
        # (pc = -1 & pc' = -1) -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcend, x_pcend),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 0 & pc' = -1) -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[0], x_pcend),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 0 & pc' = 1)  -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[0], x_pcs[1]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 1 & pc' = 2)  -> (a' = a & b' = b & x' = x & y' = y & z' = z+1),
        mgr.Implies(mgr.And(pcs[1], x_pcs[2]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, mgr.Plus(z, ints[1])))),
        # (pc = 2 & pc' = 3)  -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[2], x_pcs[3]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 2 & pc' = 4)  -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[2], x_pcs[4]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 3 & pc' = 5)  -> (a' = a & b' = b & x' = x & y' = y & z' = z+1),
        mgr.Implies(mgr.And(pcs[3], x_pcs[5]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, mgr.Plus(z, ints[1])))),
        # (pc = 4 & pc' = 5)  -> (a' = a & b' = b & x' = x & y' = y & z' = z-1),
        mgr.Implies(mgr.And(pcs[4], x_pcs[5]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, mgr.Minus(z, ints[1])))),
        # (pc = 5 & pc' = -1) -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[5], x_pcend),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 5 & pc' = 6)  -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[5], x_pcs[6]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 6 & pc' = -1) -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[6], x_pcend),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 6 & pc' = 7)  -> (a' = a & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[6], x_pcs[7]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, x), mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 7 & pc' = 8)  -> (a' = z*z & b' = b & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[7], x_pcs[8]),
                    mgr.And(mgr.Equals(x_a, mgr.Times(z, z)),
                            mgr.Equals(x_b, b), mgr.Equals(x_x, x),
                            mgr.Equals(x_y, y), mgr.Equals(x_z, z))),
        # (pc = 8 & pc' = 9)  -> (a' = a & b' = y*z & x' = x & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[8], x_pcs[9]),
                    mgr.And(mgr.Equals(x_a, a),
                            mgr.Equals(x_b, mgr.Times(y, z)),
                            mgr.Equals(x_x, x),
                            mgr.Equals(x_y, y),
                            mgr.Equals(x_z, z))),
        # (pc = 9 & pc' = 6)  -> (a' = a & b' = b & x' = a-b & y' = y & z' = z),
        mgr.Implies(mgr.And(pcs[9], x_pcs[6]),
                    mgr.And(mgr.Equals(x_a, a), mgr.Equals(x_b, b),
                            mgr.Equals(x_x, mgr.Minus(a, b)),
                            mgr.Equals(x_y, y), mgr.Equals(x_z, z)))
    )

    # transition relation.
    trans = mgr.And(cfg, labels)

    # fairness.
    fairness = mgr.Not(pcend)

    return symbols, init, trans, fairness
