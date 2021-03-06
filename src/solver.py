import time

from pysmt.environment import Environment as PysmtEnv
from pysmt.solvers.solver import Solver as PysmtSolver
from pysmt.logics import Logic, AUTO
from pysmt.exceptions import SolverReturnedUnknownResultError


SOLVERS_LIST = ["msat", "z3"]
def set_solvers(names: list) -> None:
    assert isinstance(names, list)
    global SOLVERS_LIST
    SOLVERS_LIST = names


def get_solvers() -> list:
    global SOLVERS_LIST
    assert len(SOLVERS_LIST) > 0
    return SOLVERS_LIST


SOLVER_NAME = "msat"
def set_solver_name(name: str) -> None:
    assert isinstance(name, str)
    global SOLVER_NAME
    SOLVER_NAME = name


def get_solver_name() -> str:
    global SOLVER_NAME
    return SOLVER_NAME


try:
    import mathsat

    # from pysmt.solvers.msat import MathSAT5Solver, MSatConverter
    from pysmt.solvers.msat import MathSAT5Solver
    from pysmt.logics import PYSMT_QF_LOGICS

    MathSAT5Solver.LOGICS = PYSMT_QF_LOGICS

    if __debug__:
        _t = [0]
        _DEBUG_MSAT = False

except ImportError:

    class MathSAT5Solver:
        pass


def Solver(env: PysmtEnv, name: str = None, logic: Logic = None,
           **kwargs) -> PysmtSolver:
    assert isinstance(env, PysmtEnv)
    assert name is None or isinstance(name, str)
    assert logic is None or isinstance(logic, Logic)
    if name is None:
        name = get_solver_name()
    if name == "msat":
        logic = None if logic == AUTO else logic
        msat_opts = kwargs['solver_options'] \
            if 'solver_options' in kwargs else {}
        # msat_opts['preprocessor.simplification'] = '24'
        msat_opts['theory.na.div_by_zero_mode'] = '0'
        if __debug__ and _DEBUG_MSAT:
            msat_opts = dict(msat_opts, **{
                'debug.api_call_trace': '1',
                'debug.api_call_trace_filename': '/tmp/trace-%d.smt2' % _t[0],
                'debug.api_call_trace_dump_config': 'false'
                })
            _t[0] += 1
        kwargs['solver_options'] = msat_opts
    return env.factory.Solver(name=name, logic=logic, **kwargs)


def UnsatCoreSolver(env: PysmtEnv, name: str = None,
                    logic: Logic = None, unsat_cores_mode: str = "all",
                    **kwargs) -> PysmtSolver:
    assert isinstance(env, PysmtEnv)
    assert name is None or isinstance(name, str)
    assert logic is None or isinstance(logic, Logic)
    assert isinstance(unsat_cores_mode, str)
    if name is None:
        name = get_solver_name()

    if name == 'msat':
        logic = None if logic == AUTO else logic
        msat_opts = {'preprocessor.simplification': '24',
                     'theory.na.div_by_zero_mode': '0'}
        if __debug__ and _DEBUG_MSAT:
            msat_opts = dict(msat_opts, **{
                'debug.api_call_trace': '1',
                'debug.api_call_trace_filename': '/tmp/trace-%d.smt2' % _t[0],
                'debug.api_call_trace_dump_config': 'false'
                })
            _t[0] += 1
        kwargs['solver_options'] = msat_opts
    return env.factory.UnsatCoreSolver(name=name, logic=logic,
                                       unsat_cores_mode=unsat_cores_mode,
                                       **kwargs)


def solve_with_timeout(timeout_sec: int, solver: PysmtSolver, assumptions=None):
    if isinstance(solver, MathSAT5Solver):
        start = time.time()
        count = [0]

        def ttest():
            count[0] += 1
            if count[0] == 100:
                count[0] = 0
                cur = time.time()
                return int(cur - start > timeout_sec)
            return 0
        mathsat.msat_set_termination_test(solver.msat_env(), ttest)
        return solver.solve(assumptions)

    if __debug__:
        from pysmt.solvers.z3 import Z3Solver
        assert isinstance(solver, Z3Solver), "Only msat and z3 timeout supported"
    solver.z3.set(timeout=timeout_sec*1000)
    return solver.solve(assumptions)
