extern float __VERIFIER_nondet_float(void);
extern int __VERIFIER_nondet_int(void);
typedef enum {false, true} bool;
bool __VERIFIER_nondet_bool(void) {
  return __VERIFIER_nondet_int() != 0;
}

int main()
{
float _diverge_delta, _x__diverge_delta;
float delta, _x_delta;
float max_prop, _x_max_prop;
float proposed3, _x_proposed3;
float proposed2, _x_proposed2;
float proposed1, _x_proposed1;
float proposed0, _x_proposed0;
bool p3_l0, _x_p3_l0;
bool p3_l1, _x_p3_l1;
float p3_x, _x_p3_x;
float p3_saved_max, _x_p3_saved_max;
bool id1, _x_id1;
bool inc_max_prop, _x_inc_max_prop;
bool id0, _x_id0;
bool id2, _x_id2;
bool turn1, _x_turn1;
bool turn0, _x_turn0;
bool _J627, _x__J627;
bool _J621, _x__J621;
bool _J615, _x__J615;
bool _J609, _x__J609;
bool _EL_U_582, _x__EL_U_582;
bool _EL_U_584, _x__EL_U_584;
bool _EL_U_587, _x__EL_U_587;
bool _EL_U_589, _x__EL_U_589;
bool p0_l0, _x_p0_l0;
bool p0_l1, _x_p0_l1;
float p0_x, _x_p0_x;
float p0_saved_max, _x_p0_saved_max;
bool p1_l0, _x_p1_l0;
bool p1_l1, _x_p1_l1;
float p1_x, _x_p1_x;
float p1_saved_max, _x_p1_saved_max;
bool p2_l0, _x_p2_l0;
bool p2_l1, _x_p2_l1;
float p2_x, _x_p2_x;
float p2_saved_max, _x_p2_saved_max;

  int __steps_to_fair = __VERIFIER_nondet_int();
  _diverge_delta = __VERIFIER_nondet_float();
  delta = __VERIFIER_nondet_float();
  max_prop = __VERIFIER_nondet_float();
  proposed3 = __VERIFIER_nondet_float();
  proposed2 = __VERIFIER_nondet_float();
  proposed1 = __VERIFIER_nondet_float();
  proposed0 = __VERIFIER_nondet_float();
  p3_l0 = __VERIFIER_nondet_bool();
  p3_l1 = __VERIFIER_nondet_bool();
  p3_x = __VERIFIER_nondet_float();
  p3_saved_max = __VERIFIER_nondet_float();
  id1 = __VERIFIER_nondet_bool();
  inc_max_prop = __VERIFIER_nondet_bool();
  id0 = __VERIFIER_nondet_bool();
  id2 = __VERIFIER_nondet_bool();
  turn1 = __VERIFIER_nondet_bool();
  turn0 = __VERIFIER_nondet_bool();
  _J627 = __VERIFIER_nondet_bool();
  _J621 = __VERIFIER_nondet_bool();
  _J615 = __VERIFIER_nondet_bool();
  _J609 = __VERIFIER_nondet_bool();
  _EL_U_582 = __VERIFIER_nondet_bool();
  _EL_U_584 = __VERIFIER_nondet_bool();
  _EL_U_587 = __VERIFIER_nondet_bool();
  _EL_U_589 = __VERIFIER_nondet_bool();
  p0_l0 = __VERIFIER_nondet_bool();
  p0_l1 = __VERIFIER_nondet_bool();
  p0_x = __VERIFIER_nondet_float();
  p0_saved_max = __VERIFIER_nondet_float();
  p1_l0 = __VERIFIER_nondet_bool();
  p1_l1 = __VERIFIER_nondet_bool();
  p1_x = __VERIFIER_nondet_float();
  p1_saved_max = __VERIFIER_nondet_float();
  p2_l0 = __VERIFIER_nondet_bool();
  p2_l1 = __VERIFIER_nondet_bool();
  p2_x = __VERIFIER_nondet_float();
  p2_saved_max = __VERIFIER_nondet_float();

  bool __ok = ((((((((( !p3_l0) && ( !p3_l1)) && (((( !p3_l0) && ( !p3_l1)) || (p3_l0 && ( !p3_l1))) || ((p3_l1 && ( !p3_l0)) || (p3_l0 && p3_l1)))) && ((p3_x == 0.0) && (max_prop == p3_saved_max))) && ( !(proposed3 <= 0.0))) && ((p3_x <= proposed3) || ( !(p3_l1 && ( !p3_l0))))) && ((((((( !p2_l0) && ( !p2_l1)) && (((( !p2_l0) && ( !p2_l1)) || (p2_l0 && ( !p2_l1))) || ((p2_l1 && ( !p2_l0)) || (p2_l0 && p2_l1)))) && ((p2_x == 0.0) && (max_prop == p2_saved_max))) && ( !(proposed2 <= 0.0))) && ((p2_x <= proposed2) || ( !(p2_l1 && ( !p2_l0))))) && ((((((( !p1_l0) && ( !p1_l1)) && (((( !p1_l0) && ( !p1_l1)) || (p1_l0 && ( !p1_l1))) || ((p1_l1 && ( !p1_l0)) || (p1_l0 && p1_l1)))) && ((p1_x == 0.0) && (max_prop == p1_saved_max))) && ( !(proposed1 <= 0.0))) && ((p1_x <= proposed1) || ( !(p1_l1 && ( !p1_l0))))) && ((((((( !p0_l0) && ( !p0_l1)) && (((( !p0_l0) && ( !p0_l1)) || (p0_l0 && ( !p0_l1))) || ((p0_l1 && ( !p0_l0)) || (p0_l0 && p0_l1)))) && ((p0_x == 0.0) && (max_prop == p0_saved_max))) && ( !(proposed0 <= 0.0))) && ((p0_x <= proposed0) || ( !(p0_l1 && ( !p0_l0))))) && ((((((((((id2 && (( !id0) && ( !id1))) || ((( !id2) && (id0 && id1)) || ((( !id2) && (id1 && ( !id0))) || ((( !id2) && (( !id0) && ( !id1))) || (( !id2) && (id0 && ( !id1))))))) && ((turn0 && turn1) || ((turn1 && ( !turn0)) || ((( !turn0) && ( !turn1)) || (turn0 && ( !turn1)))))) && ((( !id2) && (( !id0) && ( !id1))) && inc_max_prop)) && (0.0 <= delta)) && (proposed0 <= max_prop)) && (proposed1 <= max_prop)) && (proposed2 <= max_prop)) && (proposed3 <= max_prop)) && ((((proposed0 == max_prop) || (proposed1 == max_prop)) || (proposed2 == max_prop)) || (proposed3 == max_prop))))))) && (delta == _diverge_delta)) && ((((( !((_EL_U_589 || ( !(( !inc_max_prop) || _EL_U_587))) || (_EL_U_584 || ( !((1.0 <= _diverge_delta) || _EL_U_582))))) && ( !_J609)) && ( !_J615)) && ( !_J621)) && ( !_J627)));
  while (__steps_to_fair >= 0 && __ok) {
    if ((((_J609 && _J615) && _J621) && _J627)) {
      __steps_to_fair = __VERIFIER_nondet_int();
    } else {
      __steps_to_fair--;
    }
    _x__diverge_delta = __VERIFIER_nondet_float();
    _x_delta = __VERIFIER_nondet_float();
    _x_max_prop = __VERIFIER_nondet_float();
    _x_proposed3 = __VERIFIER_nondet_float();
    _x_proposed2 = __VERIFIER_nondet_float();
    _x_proposed1 = __VERIFIER_nondet_float();
    _x_proposed0 = __VERIFIER_nondet_float();
    _x_p3_l0 = __VERIFIER_nondet_bool();
    _x_p3_l1 = __VERIFIER_nondet_bool();
    _x_p3_x = __VERIFIER_nondet_float();
    _x_p3_saved_max = __VERIFIER_nondet_float();
    _x_id1 = __VERIFIER_nondet_bool();
    _x_inc_max_prop = __VERIFIER_nondet_bool();
    _x_id0 = __VERIFIER_nondet_bool();
    _x_id2 = __VERIFIER_nondet_bool();
    _x_turn1 = __VERIFIER_nondet_bool();
    _x_turn0 = __VERIFIER_nondet_bool();
    _x__J627 = __VERIFIER_nondet_bool();
    _x__J621 = __VERIFIER_nondet_bool();
    _x__J615 = __VERIFIER_nondet_bool();
    _x__J609 = __VERIFIER_nondet_bool();
    _x__EL_U_582 = __VERIFIER_nondet_bool();
    _x__EL_U_584 = __VERIFIER_nondet_bool();
    _x__EL_U_587 = __VERIFIER_nondet_bool();
    _x__EL_U_589 = __VERIFIER_nondet_bool();
    _x_p0_l0 = __VERIFIER_nondet_bool();
    _x_p0_l1 = __VERIFIER_nondet_bool();
    _x_p0_x = __VERIFIER_nondet_float();
    _x_p0_saved_max = __VERIFIER_nondet_float();
    _x_p1_l0 = __VERIFIER_nondet_bool();
    _x_p1_l1 = __VERIFIER_nondet_bool();
    _x_p1_x = __VERIFIER_nondet_float();
    _x_p1_saved_max = __VERIFIER_nondet_float();
    _x_p2_l0 = __VERIFIER_nondet_bool();
    _x_p2_l1 = __VERIFIER_nondet_bool();
    _x_p2_x = __VERIFIER_nondet_float();
    _x_p2_saved_max = __VERIFIER_nondet_float();

    __ok = (((((((((((((( !_x_p3_l0) && ( !_x_p3_l1)) || (_x_p3_l0 && ( !_x_p3_l1))) || ((_x_p3_l1 && ( !_x_p3_l0)) || (_x_p3_l0 && _x_p3_l1))) && ( !(_x_proposed3 <= 0.0))) && ((_x_p3_x <= _x_proposed3) || ( !(_x_p3_l1 && ( !_x_p3_l0))))) && (((((p3_l0 == _x_p3_l0) && (p3_l1 == _x_p3_l1)) && ((delta + (p3_x + (-1.0 * _x_p3_x))) == 0.0)) && ((p3_saved_max == _x_p3_saved_max) && (proposed3 == _x_proposed3))) || ( !(( !(delta <= 0.0)) || ( !(turn0 && turn1)))))) && (((((_x_p3_l1 && ( !_x_p3_l0)) && (_x_p3_x == 0.0)) && ((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && (proposed3 == _x_proposed3))) && (max_prop == _x_p3_saved_max)) || ( !((( !p3_l0) && ( !p3_l1)) && ((turn0 && turn1) && (delta == 0.0)))))) && (((max_prop == _x_p3_saved_max) && (((_x_p3_l0 && ( !_x_p3_l1)) && (_x_p3_x == 0.0)) && ((( !_x_id2) && (_x_id0 && _x_id1)) && (proposed3 == _x_proposed3)))) || ( !((p3_l1 && ( !p3_l0)) && ((turn0 && turn1) && (delta == 0.0)))))) && ((((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && (proposed3 == _x_proposed3)) && ((max_prop == _x_p3_saved_max) && (((( !_x_p3_l0) && ( !_x_p3_l1)) && (_x_p3_x == 0.0)) || ((_x_p3_l0 && _x_p3_l1) && (p3_x == _x_p3_x))))) || ( !((p3_l0 && ( !p3_l1)) && ((turn0 && turn1) && (delta == 0.0)))))) && (((max_prop == _x_p3_saved_max) && (((( !_x_p3_l0) && ( !_x_p3_l1)) && (p3_x == _x_p3_x)) && ((_x_id2 && (( !_x_id0) && ( !_x_id1))) && ( !(proposed3 <= _x_proposed3))))) || ( !((p3_l0 && p3_l1) && ((turn0 && turn1) && (delta == 0.0)))))) && (((((((((((( !_x_p2_l0) && ( !_x_p2_l1)) || (_x_p2_l0 && ( !_x_p2_l1))) || ((_x_p2_l1 && ( !_x_p2_l0)) || (_x_p2_l0 && _x_p2_l1))) && ( !(_x_proposed2 <= 0.0))) && ((_x_p2_x <= _x_proposed2) || ( !(_x_p2_l1 && ( !_x_p2_l0))))) && (((((p2_l0 == _x_p2_l0) && (p2_l1 == _x_p2_l1)) && ((delta + (p2_x + (-1.0 * _x_p2_x))) == 0.0)) && ((p2_saved_max == _x_p2_saved_max) && (proposed2 == _x_proposed2))) || ( !(( !(delta <= 0.0)) || ( !(turn1 && ( !turn0))))))) && (((((_x_p2_l1 && ( !_x_p2_l0)) && (_x_p2_x == 0.0)) && ((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && (proposed2 == _x_proposed2))) && (max_prop == _x_p2_saved_max)) || ( !((( !p2_l0) && ( !p2_l1)) && ((turn1 && ( !turn0)) && (delta == 0.0)))))) && (((max_prop == _x_p2_saved_max) && (((_x_p2_l0 && ( !_x_p2_l1)) && (_x_p2_x == 0.0)) && ((( !_x_id2) && (_x_id1 && ( !_x_id0))) && (proposed2 == _x_proposed2)))) || ( !((p2_l1 && ( !p2_l0)) && ((turn1 && ( !turn0)) && (delta == 0.0)))))) && ((((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && (proposed2 == _x_proposed2)) && ((max_prop == _x_p2_saved_max) && (((( !_x_p2_l0) && ( !_x_p2_l1)) && (_x_p2_x == 0.0)) || ((_x_p2_l0 && _x_p2_l1) && (p2_x == _x_p2_x))))) || ( !((p2_l0 && ( !p2_l1)) && ((turn1 && ( !turn0)) && (delta == 0.0)))))) && (((max_prop == _x_p2_saved_max) && (((( !_x_p2_l0) && ( !_x_p2_l1)) && (p2_x == _x_p2_x)) && ((_x_id2 && (( !_x_id0) && ( !_x_id1))) && ( !(proposed2 <= _x_proposed2))))) || ( !((p2_l0 && p2_l1) && ((turn1 && ( !turn0)) && (delta == 0.0)))))) && (((((((((((( !_x_p1_l0) && ( !_x_p1_l1)) || (_x_p1_l0 && ( !_x_p1_l1))) || ((_x_p1_l1 && ( !_x_p1_l0)) || (_x_p1_l0 && _x_p1_l1))) && ( !(_x_proposed1 <= 0.0))) && ((_x_p1_x <= _x_proposed1) || ( !(_x_p1_l1 && ( !_x_p1_l0))))) && (((((p1_l0 == _x_p1_l0) && (p1_l1 == _x_p1_l1)) && ((delta + (p1_x + (-1.0 * _x_p1_x))) == 0.0)) && ((p1_saved_max == _x_p1_saved_max) && (proposed1 == _x_proposed1))) || ( !(( !(delta <= 0.0)) || ( !(turn0 && ( !turn1))))))) && (((((_x_p1_l1 && ( !_x_p1_l0)) && (_x_p1_x == 0.0)) && ((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && (proposed1 == _x_proposed1))) && (max_prop == _x_p1_saved_max)) || ( !((( !p1_l0) && ( !p1_l1)) && ((turn0 && ( !turn1)) && (delta == 0.0)))))) && (((max_prop == _x_p1_saved_max) && (((_x_p1_l0 && ( !_x_p1_l1)) && (_x_p1_x == 0.0)) && ((( !_x_id2) && (_x_id0 && ( !_x_id1))) && (proposed1 == _x_proposed1)))) || ( !((p1_l1 && ( !p1_l0)) && ((turn0 && ( !turn1)) && (delta == 0.0)))))) && ((((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && (proposed1 == _x_proposed1)) && ((max_prop == _x_p1_saved_max) && (((( !_x_p1_l0) && ( !_x_p1_l1)) && (_x_p1_x == 0.0)) || ((_x_p1_l0 && _x_p1_l1) && (p1_x == _x_p1_x))))) || ( !((p1_l0 && ( !p1_l1)) && ((turn0 && ( !turn1)) && (delta == 0.0)))))) && (((max_prop == _x_p1_saved_max) && (((( !_x_p1_l0) && ( !_x_p1_l1)) && (p1_x == _x_p1_x)) && ((_x_id2 && (( !_x_id0) && ( !_x_id1))) && ( !(proposed1 <= _x_proposed1))))) || ( !((p1_l0 && p1_l1) && ((turn0 && ( !turn1)) && (delta == 0.0)))))) && (((((((((((( !_x_p0_l0) && ( !_x_p0_l1)) || (_x_p0_l0 && ( !_x_p0_l1))) || ((_x_p0_l1 && ( !_x_p0_l0)) || (_x_p0_l0 && _x_p0_l1))) && ( !(_x_proposed0 <= 0.0))) && ((_x_p0_x <= _x_proposed0) || ( !(_x_p0_l1 && ( !_x_p0_l0))))) && (((((p0_l0 == _x_p0_l0) && (p0_l1 == _x_p0_l1)) && ((delta + (p0_x + (-1.0 * _x_p0_x))) == 0.0)) && ((p0_saved_max == _x_p0_saved_max) && (proposed0 == _x_proposed0))) || ( !(( !(delta <= 0.0)) || ( !(( !turn0) && ( !turn1))))))) && (((((_x_p0_l1 && ( !_x_p0_l0)) && (_x_p0_x == 0.0)) && ((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && (proposed0 == _x_proposed0))) && (max_prop == _x_p0_saved_max)) || ( !((( !p0_l0) && ( !p0_l1)) && ((( !turn0) && ( !turn1)) && (delta == 0.0)))))) && (((max_prop == _x_p0_saved_max) && (((_x_p0_l0 && ( !_x_p0_l1)) && (_x_p0_x == 0.0)) && ((( !_x_id2) && (( !_x_id0) && ( !_x_id1))) && (proposed0 == _x_proposed0)))) || ( !((p0_l1 && ( !p0_l0)) && ((( !turn0) && ( !turn1)) && (delta == 0.0)))))) && ((((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && (proposed0 == _x_proposed0)) && ((max_prop == _x_p0_saved_max) && (((( !_x_p0_l0) && ( !_x_p0_l1)) && (_x_p0_x == 0.0)) || ((_x_p0_l0 && _x_p0_l1) && (p0_x == _x_p0_x))))) || ( !((p0_l0 && ( !p0_l1)) && ((( !turn0) && ( !turn1)) && (delta == 0.0)))))) && (((max_prop == _x_p0_saved_max) && (((( !_x_p0_l0) && ( !_x_p0_l1)) && (p0_x == _x_p0_x)) && ((_x_id2 && (( !_x_id0) && ( !_x_id1))) && ( !(proposed0 <= _x_proposed0))))) || ( !((p0_l0 && p0_l1) && ((( !turn0) && ( !turn1)) && (delta == 0.0)))))) && (((((((((((_x_id2 && (( !_x_id0) && ( !_x_id1))) || ((( !_x_id2) && (_x_id0 && _x_id1)) || ((( !_x_id2) && (_x_id1 && ( !_x_id0))) || ((( !_x_id2) && (( !_x_id0) && ( !_x_id1))) || (( !_x_id2) && (_x_id0 && ( !_x_id1))))))) && ((_x_turn0 && _x_turn1) || ((_x_turn1 && ( !_x_turn0)) || ((( !_x_turn0) && ( !_x_turn1)) || (_x_turn0 && ( !_x_turn1)))))) && ((delta <= 0.0) || (_x_inc_max_prop && ((((id0 == _x_id0) && (id1 == _x_id1)) && (id2 == _x_id2)) && ((turn0 == _x_turn0) && (turn1 == _x_turn1)))))) && (0.0 <= _x_delta)) && (_x_proposed0 <= _x_max_prop)) && (_x_proposed1 <= _x_max_prop)) && (_x_proposed2 <= _x_max_prop)) && (_x_proposed3 <= _x_max_prop)) && ((((_x_proposed0 == _x_max_prop) || (_x_proposed1 == _x_max_prop)) || (_x_proposed2 == _x_max_prop)) || (_x_proposed3 == _x_max_prop))) && (_x_inc_max_prop == (max_prop <= _x_max_prop))))))) && (((delta == _x__diverge_delta) || ( !(1.0 <= _diverge_delta))) && ((1.0 <= _diverge_delta) || ((delta + (_diverge_delta + (-1.0 * _x__diverge_delta))) == 0.0)))) && ((((((_EL_U_584 == (_x__EL_U_584 || ( !(_x__EL_U_582 || (1.0 <= _x__diverge_delta))))) && ((_EL_U_582 == (_x__EL_U_582 || (1.0 <= _x__diverge_delta))) && ((_EL_U_587 == (_x__EL_U_587 || ( !_x_inc_max_prop))) && (_EL_U_589 == (_x__EL_U_589 || ( !(_x__EL_U_587 || ( !_x_inc_max_prop)))))))) && (_x__J609 == (( !(((_J609 && _J615) && _J621) && _J627)) && ((((_J609 && _J615) && _J621) && _J627) || ((( !inc_max_prop) || ( !(( !inc_max_prop) || _EL_U_587))) || _J609))))) && (_x__J615 == (( !(((_J609 && _J615) && _J621) && _J627)) && ((((_J609 && _J615) && _J621) && _J627) || ((( !(( !inc_max_prop) || _EL_U_587)) || ( !(_EL_U_589 || ( !(( !inc_max_prop) || _EL_U_587))))) || _J615))))) && (_x__J621 == (( !(((_J609 && _J615) && _J621) && _J627)) && ((((_J609 && _J615) && _J621) && _J627) || (((1.0 <= _diverge_delta) || ( !((1.0 <= _diverge_delta) || _EL_U_582))) || _J621))))) && (_x__J627 == (( !(((_J609 && _J615) && _J621) && _J627)) && ((((_J609 && _J615) && _J621) && _J627) || ((( !((1.0 <= _diverge_delta) || _EL_U_582)) || ( !(_EL_U_584 || ( !((1.0 <= _diverge_delta) || _EL_U_582))))) || _J627))))));
    _diverge_delta = _x__diverge_delta;
    delta = _x_delta;
    max_prop = _x_max_prop;
    proposed3 = _x_proposed3;
    proposed2 = _x_proposed2;
    proposed1 = _x_proposed1;
    proposed0 = _x_proposed0;
    p3_l0 = _x_p3_l0;
    p3_l1 = _x_p3_l1;
    p3_x = _x_p3_x;
    p3_saved_max = _x_p3_saved_max;
    id1 = _x_id1;
    inc_max_prop = _x_inc_max_prop;
    id0 = _x_id0;
    id2 = _x_id2;
    turn1 = _x_turn1;
    turn0 = _x_turn0;
    _J627 = _x__J627;
    _J621 = _x__J621;
    _J615 = _x__J615;
    _J609 = _x__J609;
    _EL_U_582 = _x__EL_U_582;
    _EL_U_584 = _x__EL_U_584;
    _EL_U_587 = _x__EL_U_587;
    _EL_U_589 = _x__EL_U_589;
    p0_l0 = _x_p0_l0;
    p0_l1 = _x_p0_l1;
    p0_x = _x_p0_x;
    p0_saved_max = _x_p0_saved_max;
    p1_l0 = _x_p1_l0;
    p1_l1 = _x_p1_l1;
    p1_x = _x_p1_x;
    p1_saved_max = _x_p1_saved_max;
    p2_l0 = _x_p2_l0;
    p2_l1 = _x_p2_l1;
    p2_x = _x_p2_x;
    p2_saved_max = _x_p2_saved_max;

  }
}
