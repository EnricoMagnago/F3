//@ ltl invariant negative: ( ( ([] (<> ( AP((p0_l0 != 0)) && AP((p0_l1 != 0))))) || (! ([] (<> ( AP((p0_l0 != 0)) && (! AP((p0_l1 != 0)))))))) || (! ([] (<> AP((1.0 <= _diverge_delta))))));

extern float __VERIFIER_nondet_float(void);
extern int __VERIFIER_nondet_int(void);

char __VERIFIER_nondet_bool(void) {
  return __VERIFIER_nondet_int() != 0;
}


char p3_l1, _x_p3_l1;
char p3_l0, _x_p3_l0;
float _diverge_delta, _x__diverge_delta;
float p1_x, _x_p1_x;
float p3_x, _x_p3_x;
int id, _x_id;
int turn, _x_turn;
float p0_x, _x_p0_x;
char p1_l0, _x_p1_l0;
char p0_l0, _x_p0_l0;
char p0_l1, _x_p0_l1;
float delta, _x_delta;
char p1_l1, _x_p1_l1;
float p2_x, _x_p2_x;
char p2_l0, _x_p2_l0;
char p2_l1, _x_p2_l1;

int main()
{
  p3_l1 = __VERIFIER_nondet_bool();
  p3_l0 = __VERIFIER_nondet_bool();
  _diverge_delta = __VERIFIER_nondet_float();
  p1_x = __VERIFIER_nondet_float();
  p3_x = __VERIFIER_nondet_float();
  id = __VERIFIER_nondet_int();
  turn = __VERIFIER_nondet_int();
  p0_x = __VERIFIER_nondet_float();
  p1_l0 = __VERIFIER_nondet_bool();
  p0_l0 = __VERIFIER_nondet_bool();
  p0_l1 = __VERIFIER_nondet_bool();
  delta = __VERIFIER_nondet_float();
  p1_l1 = __VERIFIER_nondet_bool();
  p2_x = __VERIFIER_nondet_float();
  p2_l0 = __VERIFIER_nondet_bool();
  p2_l1 = __VERIFIER_nondet_bool();

  int __ok = (((id == 0) && (((((( !(p3_l0 != 0)) && ( !(p3_l1 != 0))) && (p3_x == 0.0)) && (((( !(p3_l0 != 0)) && ( !(p3_l1 != 0))) || ((p3_l0 != 0) && ( !(p3_l1 != 0)))) || (((p3_l1 != 0) && ( !(p3_l0 != 0))) || ((p3_l0 != 0) && (p3_l1 != 0))))) && ((p3_x <= 2.0) || ( !((p3_l1 != 0) && ( !(p3_l0 != 0)))))) && (((((( !(p2_l0 != 0)) && ( !(p2_l1 != 0))) && (p2_x == 0.0)) && (((( !(p2_l0 != 0)) && ( !(p2_l1 != 0))) || ((p2_l0 != 0) && ( !(p2_l1 != 0)))) || (((p2_l1 != 0) && ( !(p2_l0 != 0))) || ((p2_l0 != 0) && (p2_l1 != 0))))) && ((p2_x <= 2.0) || ( !((p2_l1 != 0) && ( !(p2_l0 != 0)))))) && (((((( !(p1_l0 != 0)) && ( !(p1_l1 != 0))) && (p1_x == 0.0)) && (((( !(p1_l0 != 0)) && ( !(p1_l1 != 0))) || ((p1_l0 != 0) && ( !(p1_l1 != 0)))) || (((p1_l1 != 0) && ( !(p1_l0 != 0))) || ((p1_l0 != 0) && (p1_l1 != 0))))) && ((p1_x <= 2.0) || ( !((p1_l1 != 0) && ( !(p1_l0 != 0)))))) && (((((( !(p0_l0 != 0)) && ( !(p0_l1 != 0))) && (p0_x == 0.0)) && (((( !(p0_l0 != 0)) && ( !(p0_l1 != 0))) || ((p0_l0 != 0) && ( !(p0_l1 != 0)))) || (((p0_l1 != 0) && ( !(p0_l0 != 0))) || ((p0_l0 != 0) && (p0_l1 != 0))))) && ((p0_x <= 2.0) || ( !((p0_l1 != 0) && ( !(p0_l0 != 0)))))) && (((0.0 <= delta) && ((id == 4) || ((id == 3) || ((id == 2) || ((id == 0) || (id == 1)))))) && ((turn == 4) || ((turn == 3) || ((turn == 1) || (turn == 2)))))))))) && (delta == _diverge_delta));
  while (__ok) {
    _x_p3_l1 = __VERIFIER_nondet_bool();
    _x_p3_l0 = __VERIFIER_nondet_bool();
    _x__diverge_delta = __VERIFIER_nondet_float();
    _x_p1_x = __VERIFIER_nondet_float();
    _x_p3_x = __VERIFIER_nondet_float();
    _x_id = __VERIFIER_nondet_int();
    _x_turn = __VERIFIER_nondet_int();
    _x_p0_x = __VERIFIER_nondet_float();
    _x_p1_l0 = __VERIFIER_nondet_bool();
    _x_p0_l0 = __VERIFIER_nondet_bool();
    _x_p0_l1 = __VERIFIER_nondet_bool();
    _x_delta = __VERIFIER_nondet_float();
    _x_p1_l1 = __VERIFIER_nondet_bool();
    _x_p2_x = __VERIFIER_nondet_float();
    _x_p2_l0 = __VERIFIER_nondet_bool();
    _x_p2_l1 = __VERIFIER_nondet_bool();

    __ok = (((((((((((((( !(_x_p3_l0 != 0)) && ( !(_x_p3_l1 != 0))) || ((_x_p3_l0 != 0) && ( !(_x_p3_l1 != 0)))) || (((_x_p3_l1 != 0) && ( !(_x_p3_l0 != 0))) || ((_x_p3_l0 != 0) && (_x_p3_l1 != 0)))) && ((_x_p3_x <= 2.0) || ( !((_x_p3_l1 != 0) && ( !(_x_p3_l0 != 0)))))) && (((((p3_l0 != 0) == (_x_p3_l0 != 0)) && ((p3_l1 != 0) == (_x_p3_l1 != 0))) && ((delta + (p3_x + (-1.0 * _x_p3_x))) == 0.0)) || ( !(( !(delta <= 0.0)) || ( !(turn == 4)))))) && ((((id == 0) && ((_x_p3_l1 != 0) && ( !(_x_p3_l0 != 0)))) && ((id == _x_id) && (_x_p3_x == 0.0))) || ( !((( !(p3_l0 != 0)) && ( !(p3_l1 != 0))) && ((delta == 0.0) && (turn == 4)))))) && (((((_x_p3_l0 != 0) && ( !(_x_p3_l1 != 0))) && (p3_x <= 2.0)) && ((_x_p3_x == 0.0) && (_x_id == 4))) || ( !(((p3_l1 != 0) && ( !(p3_l0 != 0))) && ((delta == 0.0) && (turn == 4)))))) && (((( !(_x_p3_l0 != 0)) && ( !(_x_p3_l1 != 0))) || ((_x_p3_l0 != 0) && (_x_p3_l1 != 0))) || ( !(((p3_l0 != 0) && ( !(p3_l1 != 0))) && ((delta == 0.0) && (turn == 4)))))) && ((((id == _x_id) && (_x_p3_x == 0.0)) && (( !(p3_x <= 2.0)) && ( !(id == 4)))) || ( !(((delta == 0.0) && (turn == 4)) && ((( !(_x_p3_l0 != 0)) && ( !(_x_p3_l1 != 0))) && ((p3_l0 != 0) && ( !(p3_l1 != 0)))))))) && ((((id == _x_id) && (p3_x == _x_p3_x)) && (( !(p3_x <= 2.0)) && (id == 4))) || ( !(((delta == 0.0) && (turn == 4)) && (((p3_l0 != 0) && ( !(p3_l1 != 0))) && ((_x_p3_l0 != 0) && (_x_p3_l1 != 0))))))) && (((( !(_x_p3_l0 != 0)) && ( !(_x_p3_l1 != 0))) && ((_x_id == 0) && (p3_x == _x_p3_x))) || ( !(((p3_l0 != 0) && (p3_l1 != 0)) && ((delta == 0.0) && (turn == 4)))))) && ((((((((((((( !(_x_p2_l0 != 0)) && ( !(_x_p2_l1 != 0))) || ((_x_p2_l0 != 0) && ( !(_x_p2_l1 != 0)))) || (((_x_p2_l1 != 0) && ( !(_x_p2_l0 != 0))) || ((_x_p2_l0 != 0) && (_x_p2_l1 != 0)))) && ((_x_p2_x <= 2.0) || ( !((_x_p2_l1 != 0) && ( !(_x_p2_l0 != 0)))))) && (((((p2_l0 != 0) == (_x_p2_l0 != 0)) && ((p2_l1 != 0) == (_x_p2_l1 != 0))) && ((delta + (p2_x + (-1.0 * _x_p2_x))) == 0.0)) || ( !(( !(delta <= 0.0)) || ( !(turn == 3)))))) && ((((id == 0) && ((_x_p2_l1 != 0) && ( !(_x_p2_l0 != 0)))) && ((id == _x_id) && (_x_p2_x == 0.0))) || ( !((( !(p2_l0 != 0)) && ( !(p2_l1 != 0))) && ((delta == 0.0) && (turn == 3)))))) && (((((_x_p2_l0 != 0) && ( !(_x_p2_l1 != 0))) && (p2_x <= 2.0)) && ((_x_p2_x == 0.0) && (_x_id == 3))) || ( !(((p2_l1 != 0) && ( !(p2_l0 != 0))) && ((delta == 0.0) && (turn == 3)))))) && (((( !(_x_p2_l0 != 0)) && ( !(_x_p2_l1 != 0))) || ((_x_p2_l0 != 0) && (_x_p2_l1 != 0))) || ( !(((p2_l0 != 0) && ( !(p2_l1 != 0))) && ((delta == 0.0) && (turn == 3)))))) && ((((id == _x_id) && (_x_p2_x == 0.0)) && (( !(p2_x <= 2.0)) && ( !(id == 3)))) || ( !(((delta == 0.0) && (turn == 3)) && ((( !(_x_p2_l0 != 0)) && ( !(_x_p2_l1 != 0))) && ((p2_l0 != 0) && ( !(p2_l1 != 0)))))))) && ((((id == _x_id) && (p2_x == _x_p2_x)) && (( !(p2_x <= 2.0)) && (id == 3))) || ( !(((delta == 0.0) && (turn == 3)) && (((p2_l0 != 0) && ( !(p2_l1 != 0))) && ((_x_p2_l0 != 0) && (_x_p2_l1 != 0))))))) && (((( !(_x_p2_l0 != 0)) && ( !(_x_p2_l1 != 0))) && ((_x_id == 0) && (p2_x == _x_p2_x))) || ( !(((p2_l0 != 0) && (p2_l1 != 0)) && ((delta == 0.0) && (turn == 3)))))) && ((((((((((((( !(_x_p1_l0 != 0)) && ( !(_x_p1_l1 != 0))) || ((_x_p1_l0 != 0) && ( !(_x_p1_l1 != 0)))) || (((_x_p1_l1 != 0) && ( !(_x_p1_l0 != 0))) || ((_x_p1_l0 != 0) && (_x_p1_l1 != 0)))) && ((_x_p1_x <= 2.0) || ( !((_x_p1_l1 != 0) && ( !(_x_p1_l0 != 0)))))) && (((((p1_l0 != 0) == (_x_p1_l0 != 0)) && ((p1_l1 != 0) == (_x_p1_l1 != 0))) && ((delta + (p1_x + (-1.0 * _x_p1_x))) == 0.0)) || ( !(( !(delta <= 0.0)) || ( !(turn == 2)))))) && ((((id == 0) && ((_x_p1_l1 != 0) && ( !(_x_p1_l0 != 0)))) && ((id == _x_id) && (_x_p1_x == 0.0))) || ( !((( !(p1_l0 != 0)) && ( !(p1_l1 != 0))) && ((delta == 0.0) && (turn == 2)))))) && (((((_x_p1_l0 != 0) && ( !(_x_p1_l1 != 0))) && (p1_x <= 2.0)) && ((_x_p1_x == 0.0) && (_x_id == 2))) || ( !(((p1_l1 != 0) && ( !(p1_l0 != 0))) && ((delta == 0.0) && (turn == 2)))))) && (((( !(_x_p1_l0 != 0)) && ( !(_x_p1_l1 != 0))) || ((_x_p1_l0 != 0) && (_x_p1_l1 != 0))) || ( !(((p1_l0 != 0) && ( !(p1_l1 != 0))) && ((delta == 0.0) && (turn == 2)))))) && ((((id == _x_id) && (_x_p1_x == 0.0)) && (( !(p1_x <= 2.0)) && ( !(id == 2)))) || ( !(((delta == 0.0) && (turn == 2)) && ((( !(_x_p1_l0 != 0)) && ( !(_x_p1_l1 != 0))) && ((p1_l0 != 0) && ( !(p1_l1 != 0)))))))) && ((((id == _x_id) && (p1_x == _x_p1_x)) && (( !(p1_x <= 2.0)) && (id == 2))) || ( !(((delta == 0.0) && (turn == 2)) && (((p1_l0 != 0) && ( !(p1_l1 != 0))) && ((_x_p1_l0 != 0) && (_x_p1_l1 != 0))))))) && (((( !(_x_p1_l0 != 0)) && ( !(_x_p1_l1 != 0))) && ((_x_id == 0) && (p1_x == _x_p1_x))) || ( !(((p1_l0 != 0) && (p1_l1 != 0)) && ((delta == 0.0) && (turn == 2)))))) && ((((((((((((( !(_x_p0_l0 != 0)) && ( !(_x_p0_l1 != 0))) || ((_x_p0_l0 != 0) && ( !(_x_p0_l1 != 0)))) || (((_x_p0_l1 != 0) && ( !(_x_p0_l0 != 0))) || ((_x_p0_l0 != 0) && (_x_p0_l1 != 0)))) && ((_x_p0_x <= 2.0) || ( !((_x_p0_l1 != 0) && ( !(_x_p0_l0 != 0)))))) && (((((p0_l0 != 0) == (_x_p0_l0 != 0)) && ((p0_l1 != 0) == (_x_p0_l1 != 0))) && ((delta + (p0_x + (-1.0 * _x_p0_x))) == 0.0)) || ( !(( !(delta <= 0.0)) || ( !(turn == 1)))))) && (((((_x_p0_l1 != 0) && ( !(_x_p0_l0 != 0))) && (id == 0)) && ((_x_p0_x == 0.0) && (id == _x_id))) || ( !((( !(p0_l0 != 0)) && ( !(p0_l1 != 0))) && ((turn == 1) && (delta == 0.0)))))) && (((((_x_p0_l0 != 0) && ( !(_x_p0_l1 != 0))) && (p0_x <= 2.0)) && ((_x_p0_x == 0.0) && (_x_id == 1))) || ( !(((p0_l1 != 0) && ( !(p0_l0 != 0))) && ((turn == 1) && (delta == 0.0)))))) && (((( !(_x_p0_l0 != 0)) && ( !(_x_p0_l1 != 0))) || ((_x_p0_l0 != 0) && (_x_p0_l1 != 0))) || ( !(((p0_l0 != 0) && ( !(p0_l1 != 0))) && ((turn == 1) && (delta == 0.0)))))) && ((((_x_p0_x == 0.0) && (id == _x_id)) && (( !(p0_x <= 2.0)) && ( !(id == 1)))) || ( !(((turn == 1) && (delta == 0.0)) && ((( !(_x_p0_l0 != 0)) && ( !(_x_p0_l1 != 0))) && ((p0_l0 != 0) && ( !(p0_l1 != 0)))))))) && ((((id == _x_id) && (p0_x == _x_p0_x)) && (( !(p0_x <= 2.0)) && (id == 1))) || ( !(((turn == 1) && (delta == 0.0)) && (((p0_l0 != 0) && ( !(p0_l1 != 0))) && ((_x_p0_l0 != 0) && (_x_p0_l1 != 0))))))) && (((( !(_x_p0_l0 != 0)) && ( !(_x_p0_l1 != 0))) && ((p0_x == _x_p0_x) && (_x_id == 0))) || ( !(((p0_l0 != 0) && (p0_l1 != 0)) && ((turn == 1) && (delta == 0.0)))))) && (((((id == 4) || ((id == 3) || ((id == 2) || ((id == 0) || (id == 1))))) && ((((_x_turn == 1) || (_x_turn == 2)) || (_x_turn == 3)) || (_x_turn == 4))) && (0.0 <= _x_delta)) && ((delta <= 0.0) || ((id == _x_id) && (turn == _x_turn)))))))) && (((delta == _x__diverge_delta) || ( !(1.0 <= _diverge_delta))) && ((1.0 <= _diverge_delta) || ((delta + (_diverge_delta + (-1.0 * _x__diverge_delta))) == 0.0))));
    p3_l1 = _x_p3_l1;
    p3_l0 = _x_p3_l0;
    _diverge_delta = _x__diverge_delta;
    p1_x = _x_p1_x;
    p3_x = _x_p3_x;
    id = _x_id;
    turn = _x_turn;
    p0_x = _x_p0_x;
    p1_l0 = _x_p1_l0;
    p0_l0 = _x_p0_l0;
    p0_l1 = _x_p0_l1;
    delta = _x_delta;
    p1_l1 = _x_p1_l1;
    p2_x = _x_p2_x;
    p2_l0 = _x_p2_l0;
    p2_l1 = _x_p2_l1;

  }
}
