extern float __VERIFIER_nondet_float(void);
extern int __VERIFIER_nondet_int(void);
typedef enum {false, true} bool;
bool __VERIFIER_nondet_bool(void) {
  return __VERIFIER_nondet_int() != 0;
}

int main()
{
float _diverge_delta, _x__diverge_delta;
bool _EL_U_445, _x__EL_U_445;
float delta, _x_delta;
bool _EL_X_410, _x__EL_X_410;
float tot_transm_time, _x_tot_transm_time;
bool _EL_U_447, _x__EL_U_447;
float mgr_timeout, _x_mgr_timeout;
float mgr_c, _x_mgr_c;
bool _EL_U_449, _x__EL_U_449;
bool mgr_l, _x_mgr_l;
bool _EL_U_451, _x__EL_U_451;
bool mgr_evt1, _x_mgr_evt1;
bool _EL_U_453, _x__EL_U_453;
bool mgr_evt0, _x_mgr_evt0;
float st0_req_time, _x_st0_req_time;
bool st0_evt1, _x_st0_evt1;
bool st0_evt0, _x_st0_evt0;
bool st0_l, _x_st0_l;
float st1_req_time, _x_st1_req_time;
bool st1_evt1, _x_st1_evt1;
bool st1_evt0, _x_st1_evt0;
bool st1_l, _x_st1_l;
float st2_req_time, _x_st2_req_time;
bool st2_evt1, _x_st2_evt1;
bool st2_evt0, _x_st2_evt0;
bool st2_l, _x_st2_l;
float st3_req_time, _x_st3_req_time;
bool st3_evt1, _x_st3_evt1;
bool st3_evt0, _x_st3_evt0;
bool st3_l, _x_st3_l;
float st4_req_time, _x_st4_req_time;
bool st4_evt1, _x_st4_evt1;
bool st4_evt0, _x_st4_evt0;
bool st4_l, _x_st4_l;
bool _J517, _x__J517;
bool _J511, _x__J511;
bool _J504, _x__J504;
bool _J498, _x__J498;
bool _J490, _x__J490;
bool _J484, _x__J484;
bool _EL_U_443, _x__EL_U_443;

  int __steps_to_fair = __VERIFIER_nondet_int();
  _diverge_delta = __VERIFIER_nondet_float();
  _EL_U_445 = __VERIFIER_nondet_bool();
  delta = __VERIFIER_nondet_float();
  _EL_X_410 = __VERIFIER_nondet_bool();
  tot_transm_time = __VERIFIER_nondet_float();
  _EL_U_447 = __VERIFIER_nondet_bool();
  mgr_timeout = __VERIFIER_nondet_float();
  mgr_c = __VERIFIER_nondet_float();
  _EL_U_449 = __VERIFIER_nondet_bool();
  mgr_l = __VERIFIER_nondet_bool();
  _EL_U_451 = __VERIFIER_nondet_bool();
  mgr_evt1 = __VERIFIER_nondet_bool();
  _EL_U_453 = __VERIFIER_nondet_bool();
  mgr_evt0 = __VERIFIER_nondet_bool();
  st0_req_time = __VERIFIER_nondet_float();
  st0_evt1 = __VERIFIER_nondet_bool();
  st0_evt0 = __VERIFIER_nondet_bool();
  st0_l = __VERIFIER_nondet_bool();
  st1_req_time = __VERIFIER_nondet_float();
  st1_evt1 = __VERIFIER_nondet_bool();
  st1_evt0 = __VERIFIER_nondet_bool();
  st1_l = __VERIFIER_nondet_bool();
  st2_req_time = __VERIFIER_nondet_float();
  st2_evt1 = __VERIFIER_nondet_bool();
  st2_evt0 = __VERIFIER_nondet_bool();
  st2_l = __VERIFIER_nondet_bool();
  st3_req_time = __VERIFIER_nondet_float();
  st3_evt1 = __VERIFIER_nondet_bool();
  st3_evt0 = __VERIFIER_nondet_bool();
  st3_l = __VERIFIER_nondet_bool();
  st4_req_time = __VERIFIER_nondet_float();
  st4_evt1 = __VERIFIER_nondet_bool();
  st4_evt0 = __VERIFIER_nondet_bool();
  st4_l = __VERIFIER_nondet_bool();
  _J517 = __VERIFIER_nondet_bool();
  _J511 = __VERIFIER_nondet_bool();
  _J504 = __VERIFIER_nondet_bool();
  _J498 = __VERIFIER_nondet_bool();
  _J490 = __VERIFIER_nondet_bool();
  _J484 = __VERIFIER_nondet_bool();
  _EL_U_443 = __VERIFIER_nondet_bool();

  bool __ok = (((((st4_l && ((st4_evt1 && ( !st4_evt0)) || ((( !st4_evt0) && ( !st4_evt1)) || (st4_evt0 && ( !st4_evt1))))) && ( !(st4_req_time <= 0.0))) && (((st3_l && ((st3_evt1 && ( !st3_evt0)) || ((( !st3_evt0) && ( !st3_evt1)) || (st3_evt0 && ( !st3_evt1))))) && ( !(st3_req_time <= 0.0))) && (((st2_l && ((st2_evt1 && ( !st2_evt0)) || ((( !st2_evt0) && ( !st2_evt1)) || (st2_evt0 && ( !st2_evt1))))) && ( !(st2_req_time <= 0.0))) && (((st1_l && ((st1_evt1 && ( !st1_evt0)) || ((( !st1_evt0) && ( !st1_evt1)) || (st1_evt0 && ( !st1_evt1))))) && ( !(st1_req_time <= 0.0))) && (((st0_l && ((st0_evt1 && ( !st0_evt0)) || ((( !st0_evt0) && ( !st0_evt1)) || (st0_evt0 && ( !st0_evt1))))) && ( !(st0_req_time <= 0.0))) && ((((mgr_l && ((mgr_evt1 && ( !mgr_evt0)) || ((( !mgr_evt0) && ( !mgr_evt1)) || (mgr_evt0 && ( !mgr_evt1))))) && ((mgr_c == 0.0) && (mgr_timeout == 0.0))) && (mgr_l || (mgr_c <= mgr_timeout))) && ((tot_transm_time == 0.0) && (0.0 <= delta)))))))) && (delta == _diverge_delta)) && ((((((( !((( !(_EL_U_453 || ( !(( !(10.0 <= tot_transm_time)) || _EL_U_451)))) || (_EL_U_449 || ( !(_EL_U_447 || (( !mgr_l) && _EL_X_410))))) || (_EL_U_445 || ( !((1.0 <= _diverge_delta) || _EL_U_443))))) && ( !_J484)) && ( !_J490)) && ( !_J498)) && ( !_J504)) && ( !_J511)) && ( !_J517)));
  while (__steps_to_fair >= 0 && __ok) {
    if ((((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517)) {
      __steps_to_fair = __VERIFIER_nondet_int();
    } else {
      __steps_to_fair--;
    }
    _x__diverge_delta = __VERIFIER_nondet_float();
    _x__EL_U_445 = __VERIFIER_nondet_bool();
    _x_delta = __VERIFIER_nondet_float();
    _x__EL_X_410 = __VERIFIER_nondet_bool();
    _x_tot_transm_time = __VERIFIER_nondet_float();
    _x__EL_U_447 = __VERIFIER_nondet_bool();
    _x_mgr_timeout = __VERIFIER_nondet_float();
    _x_mgr_c = __VERIFIER_nondet_float();
    _x__EL_U_449 = __VERIFIER_nondet_bool();
    _x_mgr_l = __VERIFIER_nondet_bool();
    _x__EL_U_451 = __VERIFIER_nondet_bool();
    _x_mgr_evt1 = __VERIFIER_nondet_bool();
    _x__EL_U_453 = __VERIFIER_nondet_bool();
    _x_mgr_evt0 = __VERIFIER_nondet_bool();
    _x_st0_req_time = __VERIFIER_nondet_float();
    _x_st0_evt1 = __VERIFIER_nondet_bool();
    _x_st0_evt0 = __VERIFIER_nondet_bool();
    _x_st0_l = __VERIFIER_nondet_bool();
    _x_st1_req_time = __VERIFIER_nondet_float();
    _x_st1_evt1 = __VERIFIER_nondet_bool();
    _x_st1_evt0 = __VERIFIER_nondet_bool();
    _x_st1_l = __VERIFIER_nondet_bool();
    _x_st2_req_time = __VERIFIER_nondet_float();
    _x_st2_evt1 = __VERIFIER_nondet_bool();
    _x_st2_evt0 = __VERIFIER_nondet_bool();
    _x_st2_l = __VERIFIER_nondet_bool();
    _x_st3_req_time = __VERIFIER_nondet_float();
    _x_st3_evt1 = __VERIFIER_nondet_bool();
    _x_st3_evt0 = __VERIFIER_nondet_bool();
    _x_st3_l = __VERIFIER_nondet_bool();
    _x_st4_req_time = __VERIFIER_nondet_float();
    _x_st4_evt1 = __VERIFIER_nondet_bool();
    _x_st4_evt0 = __VERIFIER_nondet_bool();
    _x_st4_l = __VERIFIER_nondet_bool();
    _x__J517 = __VERIFIER_nondet_bool();
    _x__J511 = __VERIFIER_nondet_bool();
    _x__J504 = __VERIFIER_nondet_bool();
    _x__J498 = __VERIFIER_nondet_bool();
    _x__J490 = __VERIFIER_nondet_bool();
    _x__J484 = __VERIFIER_nondet_bool();
    _x__EL_U_443 = __VERIFIER_nondet_bool();

    __ok = (((((((((_x_st4_evt1 && ( !_x_st4_evt0)) || ((( !_x_st4_evt0) && ( !_x_st4_evt1)) || (_x_st4_evt0 && ( !_x_st4_evt1)))) && ( !(_x_st4_req_time <= 0.0))) && (((st4_l == _x_st4_l) && (st4_req_time == _x_st4_req_time)) || ( !(( !(delta <= 0.0)) || (st4_evt1 && ( !st4_evt0)))))) && ((((( !st4_evt0) && ( !st4_evt1)) && ( !_x_st4_l)) && ((st4_req_time == _x_st4_req_time) && (_x_mgr_timeout == st4_req_time))) || ( !(st4_l && ((delta == 0.0) && ((( !st4_evt0) && ( !st4_evt1)) || (st4_evt0 && ( !st4_evt1)))))))) && (((st4_evt0 && ( !st4_evt1)) && (( !(mgr_c <= 0.0)) && _x_st4_l)) || ( !(( !st4_l) && ((delta == 0.0) && ((( !st4_evt0) && ( !st4_evt1)) || (st4_evt0 && ( !st4_evt1)))))))) && (((((((_x_st3_evt1 && ( !_x_st3_evt0)) || ((( !_x_st3_evt0) && ( !_x_st3_evt1)) || (_x_st3_evt0 && ( !_x_st3_evt1)))) && ( !(_x_st3_req_time <= 0.0))) && (((st3_l == _x_st3_l) && (st3_req_time == _x_st3_req_time)) || ( !(( !(delta <= 0.0)) || (st3_evt1 && ( !st3_evt0)))))) && ((((( !st3_evt0) && ( !st3_evt1)) && ( !_x_st3_l)) && ((st3_req_time == _x_st3_req_time) && (_x_mgr_timeout == st3_req_time))) || ( !(st3_l && ((delta == 0.0) && ((( !st3_evt0) && ( !st3_evt1)) || (st3_evt0 && ( !st3_evt1)))))))) && (((st3_evt0 && ( !st3_evt1)) && (( !(mgr_c <= 0.0)) && _x_st3_l)) || ( !(( !st3_l) && ((delta == 0.0) && ((( !st3_evt0) && ( !st3_evt1)) || (st3_evt0 && ( !st3_evt1)))))))) && (((((((_x_st2_evt1 && ( !_x_st2_evt0)) || ((( !_x_st2_evt0) && ( !_x_st2_evt1)) || (_x_st2_evt0 && ( !_x_st2_evt1)))) && ( !(_x_st2_req_time <= 0.0))) && (((st2_l == _x_st2_l) && (st2_req_time == _x_st2_req_time)) || ( !(( !(delta <= 0.0)) || (st2_evt1 && ( !st2_evt0)))))) && ((((( !st2_evt0) && ( !st2_evt1)) && ( !_x_st2_l)) && ((st2_req_time == _x_st2_req_time) && (_x_mgr_timeout == st2_req_time))) || ( !(st2_l && ((delta == 0.0) && ((( !st2_evt0) && ( !st2_evt1)) || (st2_evt0 && ( !st2_evt1)))))))) && (((st2_evt0 && ( !st2_evt1)) && (( !(mgr_c <= 0.0)) && _x_st2_l)) || ( !(( !st2_l) && ((delta == 0.0) && ((( !st2_evt0) && ( !st2_evt1)) || (st2_evt0 && ( !st2_evt1)))))))) && (((((((_x_st1_evt1 && ( !_x_st1_evt0)) || ((( !_x_st1_evt0) && ( !_x_st1_evt1)) || (_x_st1_evt0 && ( !_x_st1_evt1)))) && ( !(_x_st1_req_time <= 0.0))) && (((st1_l == _x_st1_l) && (st1_req_time == _x_st1_req_time)) || ( !(( !(delta <= 0.0)) || (st1_evt1 && ( !st1_evt0)))))) && ((((( !st1_evt0) && ( !st1_evt1)) && ( !_x_st1_l)) && ((st1_req_time == _x_st1_req_time) && (_x_mgr_timeout == st1_req_time))) || ( !(st1_l && ((delta == 0.0) && ((( !st1_evt0) && ( !st1_evt1)) || (st1_evt0 && ( !st1_evt1)))))))) && (((st1_evt0 && ( !st1_evt1)) && (( !(mgr_c <= 0.0)) && _x_st1_l)) || ( !(( !st1_l) && ((delta == 0.0) && ((( !st1_evt0) && ( !st1_evt1)) || (st1_evt0 && ( !st1_evt1)))))))) && (((((((_x_st0_evt1 && ( !_x_st0_evt0)) || ((( !_x_st0_evt0) && ( !_x_st0_evt1)) || (_x_st0_evt0 && ( !_x_st0_evt1)))) && ( !(_x_st0_req_time <= 0.0))) && (((st0_l == _x_st0_l) && (st0_req_time == _x_st0_req_time)) || ( !(( !(delta <= 0.0)) || (st0_evt1 && ( !st0_evt0)))))) && ((((( !st0_evt0) && ( !st0_evt1)) && ( !_x_st0_l)) && ((st0_req_time == _x_st0_req_time) && (_x_mgr_timeout == st0_req_time))) || ( !(st0_l && ((delta == 0.0) && ((( !st0_evt0) && ( !st0_evt1)) || (st0_evt0 && ( !st0_evt1)))))))) && (((st0_evt0 && ( !st0_evt1)) && (_x_st0_l && ( !(mgr_c <= 0.0)))) || ( !(( !st0_l) && ((delta == 0.0) && ((( !st0_evt0) && ( !st0_evt1)) || (st0_evt0 && ( !st0_evt1)))))))) && (((((((_x_mgr_evt1 && ( !_x_mgr_evt0)) || ((( !_x_mgr_evt0) && ( !_x_mgr_evt1)) || (_x_mgr_evt0 && ( !_x_mgr_evt1)))) && (_x_mgr_l || (_x_mgr_c <= _x_mgr_timeout))) && ((((mgr_l == _x_mgr_l) && ((delta + (mgr_c + (-1.0 * _x_mgr_c))) == 0.0)) && (mgr_timeout == _x_mgr_timeout)) || ( !((mgr_evt1 && ( !mgr_evt0)) || ( !(delta <= 0.0)))))) && (((( !mgr_evt0) && ( !mgr_evt1)) && (( !_x_mgr_l) && (_x_mgr_c == 0.0))) || ( !(mgr_l && (((( !mgr_evt0) && ( !mgr_evt1)) || (mgr_evt0 && ( !mgr_evt1))) && (delta == 0.0)))))) && (((_x_mgr_l && (mgr_evt0 && ( !mgr_evt1))) && ((_x_mgr_c == 0.0) && (_x_mgr_timeout == 0.0))) || ( !(( !mgr_l) && (((( !mgr_evt0) && ( !mgr_evt1)) || (mgr_evt0 && ( !mgr_evt1))) && (delta == 0.0)))))) && (((((((((((((((0.0 <= _x_delta) && ((st0_evt1 && ( !st0_evt0)) || (st1_evt1 && ( !st1_evt0)))) && ((st0_evt1 && ( !st0_evt0)) || (st2_evt1 && ( !st2_evt0)))) && ((st0_evt1 && ( !st0_evt0)) || (st3_evt1 && ( !st3_evt0)))) && ((st0_evt1 && ( !st0_evt0)) || (st4_evt1 && ( !st4_evt0)))) && ((st1_evt1 && ( !st1_evt0)) || (st2_evt1 && ( !st2_evt0)))) && ((st1_evt1 && ( !st1_evt0)) || (st3_evt1 && ( !st3_evt0)))) && ((st1_evt1 && ( !st1_evt0)) || (st4_evt1 && ( !st4_evt0)))) && ((st2_evt1 && ( !st2_evt0)) || (st3_evt1 && ( !st3_evt0)))) && ((st2_evt1 && ( !st2_evt0)) || (st4_evt1 && ( !st4_evt0)))) && ((st3_evt1 && ( !st3_evt0)) || (st4_evt1 && ( !st4_evt0)))) && ((( !mgr_evt0) && ( !mgr_evt1)) == ((( !st4_evt0) && ( !st4_evt1)) || ((( !st3_evt0) && ( !st3_evt1)) || ((( !st2_evt0) && ( !st2_evt1)) || ((( !st0_evt0) && ( !st0_evt1)) || (( !st1_evt0) && ( !st1_evt1)))))))) && ((mgr_evt0 && ( !mgr_evt1)) == ((st4_evt0 && ( !st4_evt1)) || ((st3_evt0 && ( !st3_evt1)) || ((st2_evt0 && ( !st2_evt1)) || ((st0_evt0 && ( !st0_evt1)) || (st1_evt0 && ( !st1_evt1)))))))) && (((tot_transm_time + ((-1.0 * _x_tot_transm_time) + mgr_c)) == 0.0) || ( !(_x_mgr_l && ( !mgr_l))))) && ((_x_mgr_l && ( !mgr_l)) || (tot_transm_time == _x_tot_transm_time))))))))) && (((delta == _x__diverge_delta) || ( !(1.0 <= _diverge_delta))) && ((1.0 <= _diverge_delta) || ((delta + (_diverge_delta + (-1.0 * _x__diverge_delta))) == 0.0)))) && ((((((((_EL_U_445 == (_x__EL_U_445 || ( !(_x__EL_U_443 || (1.0 <= _x__diverge_delta))))) && ((_EL_U_443 == (_x__EL_U_443 || (1.0 <= _x__diverge_delta))) && ((_EL_U_449 == (_x__EL_U_449 || ( !(_x__EL_U_447 || (( !_x_mgr_l) && _x__EL_X_410))))) && ((_EL_U_447 == (_x__EL_U_447 || (( !_x_mgr_l) && _x__EL_X_410))) && ((_x_mgr_l == _EL_X_410) && ((_EL_U_451 == (_x__EL_U_451 || ( !(10.0 <= _x_tot_transm_time)))) && (_EL_U_453 == (_x__EL_U_453 || ( !(_x__EL_U_451 || ( !(10.0 <= _x_tot_transm_time)))))))))))) && (_x__J484 == (( !(((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517)) && ((((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517) || ((( !(10.0 <= tot_transm_time)) || ( !(( !(10.0 <= tot_transm_time)) || _EL_U_451))) || _J484))))) && (_x__J490 == (( !(((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517)) && ((((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517) || ((( !(( !(10.0 <= tot_transm_time)) || _EL_U_451)) || ( !(_EL_U_453 || ( !(( !(10.0 <= tot_transm_time)) || _EL_U_451))))) || _J490))))) && (_x__J498 == (( !(((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517)) && ((((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517) || (((( !mgr_l) && _EL_X_410) || ( !(_EL_U_447 || (( !mgr_l) && _EL_X_410)))) || _J498))))) && (_x__J504 == (( !(((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517)) && ((((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517) || ((( !(_EL_U_447 || (( !mgr_l) && _EL_X_410))) || ( !(_EL_U_449 || ( !(_EL_U_447 || (( !mgr_l) && _EL_X_410)))))) || _J504))))) && (_x__J511 == (( !(((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517)) && ((((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517) || (((1.0 <= _diverge_delta) || ( !((1.0 <= _diverge_delta) || _EL_U_443))) || _J511))))) && (_x__J517 == (( !(((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517)) && ((((((_J484 && _J490) && _J498) && _J504) && _J511) && _J517) || ((( !((1.0 <= _diverge_delta) || _EL_U_443)) || ( !(_EL_U_445 || ( !((1.0 <= _diverge_delta) || _EL_U_443))))) || _J517))))));
    _diverge_delta = _x__diverge_delta;
    _EL_U_445 = _x__EL_U_445;
    delta = _x_delta;
    _EL_X_410 = _x__EL_X_410;
    tot_transm_time = _x_tot_transm_time;
    _EL_U_447 = _x__EL_U_447;
    mgr_timeout = _x_mgr_timeout;
    mgr_c = _x_mgr_c;
    _EL_U_449 = _x__EL_U_449;
    mgr_l = _x_mgr_l;
    _EL_U_451 = _x__EL_U_451;
    mgr_evt1 = _x_mgr_evt1;
    _EL_U_453 = _x__EL_U_453;
    mgr_evt0 = _x_mgr_evt0;
    st0_req_time = _x_st0_req_time;
    st0_evt1 = _x_st0_evt1;
    st0_evt0 = _x_st0_evt0;
    st0_l = _x_st0_l;
    st1_req_time = _x_st1_req_time;
    st1_evt1 = _x_st1_evt1;
    st1_evt0 = _x_st1_evt0;
    st1_l = _x_st1_l;
    st2_req_time = _x_st2_req_time;
    st2_evt1 = _x_st2_evt1;
    st2_evt0 = _x_st2_evt0;
    st2_l = _x_st2_l;
    st3_req_time = _x_st3_req_time;
    st3_evt1 = _x_st3_evt1;
    st3_evt0 = _x_st3_evt0;
    st3_l = _x_st3_l;
    st4_req_time = _x_st4_req_time;
    st4_evt1 = _x_st4_evt1;
    st4_evt0 = _x_st4_evt0;
    st4_l = _x_st4_l;
    _J517 = _x__J517;
    _J511 = _x__J511;
    _J504 = _x__J504;
    _J498 = _x__J498;
    _J490 = _x__J490;
    _J484 = _x__J484;
    _EL_U_443 = _x__EL_U_443;

  }
}
