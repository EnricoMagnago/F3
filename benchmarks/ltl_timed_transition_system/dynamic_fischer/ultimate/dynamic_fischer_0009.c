//@ ltl invariant negative: ( (<> ([] AP((inc_max_prop != 0)))) || (! ([] (<> AP((1.0 <= _diverge_delta))))));

extern float __VERIFIER_nondet_float(void);
extern int __VERIFIER_nondet_int(void);

char __VERIFIER_nondet_bool(void) {
  return __VERIFIER_nondet_int() != 0;
}


char p8_l1, _x_p8_l1;
char p8_l0, _x_p8_l0;
float p8_saved_max, _x_p8_saved_max;
char p7_l1, _x_p7_l1;
float p8_x, _x_p8_x;
char p7_l0, _x_p7_l0;
float p6_saved_max, _x_p6_saved_max;
char p5_l1, _x_p5_l1;
float p3_saved_max, _x_p3_saved_max;
char p2_l1, _x_p2_l1;
float p3_x, _x_p3_x;
char p2_l0, _x_p2_l0;
char turn1, _x_turn1;
float p2_saved_max, _x_p2_saved_max;
char p1_l1, _x_p1_l1;
float proposed1, _x_proposed1;
char id1, _x_id1;
char turn0, _x_turn0;
float p2_x, _x_p2_x;
char p1_l0, _x_p1_l0;
char turn3, _x_turn3;
char turn2, _x_turn2;
float p7_x, _x_p7_x;
char p6_l0, _x_p6_l0;
float proposed3, _x_proposed3;
char id3, _x_id3;
char id2, _x_id2;
float proposed2, _x_proposed2;
float proposed0, _x_proposed0;
char id0, _x_id0;
float p4_saved_max, _x_p4_saved_max;
char p3_l1, _x_p3_l1;
float p0_saved_max, _x_p0_saved_max;
float p6_x, _x_p6_x;
char p5_l0, _x_p5_l0;
char inc_max_prop, _x_inc_max_prop;
float delta, _x_delta;
float max_prop, _x_max_prop;
float p1_saved_max, _x_p1_saved_max;
float p7_saved_max, _x_p7_saved_max;
char p6_l1, _x_p6_l1;
float proposed4, _x_proposed4;
float proposed5, _x_proposed5;
float proposed6, _x_proposed6;
float proposed7, _x_proposed7;
float proposed8, _x_proposed8;
float p1_x, _x_p1_x;
float p4_x, _x_p4_x;
char p3_l0, _x_p3_l0;
float p0_x, _x_p0_x;
float p5_x, _x_p5_x;
char p4_l0, _x_p4_l0;
char p0_l0, _x_p0_l0;
float _diverge_delta, _x__diverge_delta;
float p5_saved_max, _x_p5_saved_max;
char p4_l1, _x_p4_l1;
char p0_l1, _x_p0_l1;

int main()
{
  p8_l1 = __VERIFIER_nondet_bool();
  p8_l0 = __VERIFIER_nondet_bool();
  p8_saved_max = __VERIFIER_nondet_float();
  p7_l1 = __VERIFIER_nondet_bool();
  p8_x = __VERIFIER_nondet_float();
  p7_l0 = __VERIFIER_nondet_bool();
  p6_saved_max = __VERIFIER_nondet_float();
  p5_l1 = __VERIFIER_nondet_bool();
  p3_saved_max = __VERIFIER_nondet_float();
  p2_l1 = __VERIFIER_nondet_bool();
  p3_x = __VERIFIER_nondet_float();
  p2_l0 = __VERIFIER_nondet_bool();
  turn1 = __VERIFIER_nondet_bool();
  p2_saved_max = __VERIFIER_nondet_float();
  p1_l1 = __VERIFIER_nondet_bool();
  proposed1 = __VERIFIER_nondet_float();
  id1 = __VERIFIER_nondet_bool();
  turn0 = __VERIFIER_nondet_bool();
  p2_x = __VERIFIER_nondet_float();
  p1_l0 = __VERIFIER_nondet_bool();
  turn3 = __VERIFIER_nondet_bool();
  turn2 = __VERIFIER_nondet_bool();
  p7_x = __VERIFIER_nondet_float();
  p6_l0 = __VERIFIER_nondet_bool();
  proposed3 = __VERIFIER_nondet_float();
  id3 = __VERIFIER_nondet_bool();
  id2 = __VERIFIER_nondet_bool();
  proposed2 = __VERIFIER_nondet_float();
  proposed0 = __VERIFIER_nondet_float();
  id0 = __VERIFIER_nondet_bool();
  p4_saved_max = __VERIFIER_nondet_float();
  p3_l1 = __VERIFIER_nondet_bool();
  p0_saved_max = __VERIFIER_nondet_float();
  p6_x = __VERIFIER_nondet_float();
  p5_l0 = __VERIFIER_nondet_bool();
  inc_max_prop = __VERIFIER_nondet_bool();
  delta = __VERIFIER_nondet_float();
  max_prop = __VERIFIER_nondet_float();
  p1_saved_max = __VERIFIER_nondet_float();
  p7_saved_max = __VERIFIER_nondet_float();
  p6_l1 = __VERIFIER_nondet_bool();
  proposed4 = __VERIFIER_nondet_float();
  proposed5 = __VERIFIER_nondet_float();
  proposed6 = __VERIFIER_nondet_float();
  proposed7 = __VERIFIER_nondet_float();
  proposed8 = __VERIFIER_nondet_float();
  p1_x = __VERIFIER_nondet_float();
  p4_x = __VERIFIER_nondet_float();
  p3_l0 = __VERIFIER_nondet_bool();
  p0_x = __VERIFIER_nondet_float();
  p5_x = __VERIFIER_nondet_float();
  p4_l0 = __VERIFIER_nondet_bool();
  p0_l0 = __VERIFIER_nondet_bool();
  _diverge_delta = __VERIFIER_nondet_float();
  p5_saved_max = __VERIFIER_nondet_float();
  p4_l1 = __VERIFIER_nondet_bool();
  p0_l1 = __VERIFIER_nondet_bool();

  int __ok = (((((((( !(p8_l0 != 0)) && ( !(p8_l1 != 0))) && (((( !(p8_l0 != 0)) && ( !(p8_l1 != 0))) || ((p8_l0 != 0) && ( !(p8_l1 != 0)))) || (((p8_l1 != 0) && ( !(p8_l0 != 0))) || ((p8_l0 != 0) && (p8_l1 != 0))))) && ((p8_x == 0.0) && (max_prop == p8_saved_max))) && ( !(proposed8 <= 0.0))) && ((p8_x <= proposed8) || ( !((p8_l1 != 0) && ( !(p8_l0 != 0)))))) && ((((((( !(p7_l0 != 0)) && ( !(p7_l1 != 0))) && (((( !(p7_l0 != 0)) && ( !(p7_l1 != 0))) || ((p7_l0 != 0) && ( !(p7_l1 != 0)))) || (((p7_l1 != 0) && ( !(p7_l0 != 0))) || ((p7_l0 != 0) && (p7_l1 != 0))))) && ((p7_x == 0.0) && (max_prop == p7_saved_max))) && ( !(proposed7 <= 0.0))) && ((p7_x <= proposed7) || ( !((p7_l1 != 0) && ( !(p7_l0 != 0)))))) && ((((((( !(p6_l0 != 0)) && ( !(p6_l1 != 0))) && (((( !(p6_l0 != 0)) && ( !(p6_l1 != 0))) || ((p6_l0 != 0) && ( !(p6_l1 != 0)))) || (((p6_l1 != 0) && ( !(p6_l0 != 0))) || ((p6_l0 != 0) && (p6_l1 != 0))))) && ((p6_x == 0.0) && (max_prop == p6_saved_max))) && ( !(proposed6 <= 0.0))) && ((p6_x <= proposed6) || ( !((p6_l1 != 0) && ( !(p6_l0 != 0)))))) && ((((((( !(p5_l0 != 0)) && ( !(p5_l1 != 0))) && (((( !(p5_l0 != 0)) && ( !(p5_l1 != 0))) || ((p5_l0 != 0) && ( !(p5_l1 != 0)))) || (((p5_l1 != 0) && ( !(p5_l0 != 0))) || ((p5_l0 != 0) && (p5_l1 != 0))))) && ((p5_x == 0.0) && (max_prop == p5_saved_max))) && ( !(proposed5 <= 0.0))) && ((p5_x <= proposed5) || ( !((p5_l1 != 0) && ( !(p5_l0 != 0)))))) && ((((((( !(p4_l0 != 0)) && ( !(p4_l1 != 0))) && (((( !(p4_l0 != 0)) && ( !(p4_l1 != 0))) || ((p4_l0 != 0) && ( !(p4_l1 != 0)))) || (((p4_l1 != 0) && ( !(p4_l0 != 0))) || ((p4_l0 != 0) && (p4_l1 != 0))))) && ((p4_x == 0.0) && (max_prop == p4_saved_max))) && ( !(proposed4 <= 0.0))) && ((p4_x <= proposed4) || ( !((p4_l1 != 0) && ( !(p4_l0 != 0)))))) && ((((((( !(p3_l0 != 0)) && ( !(p3_l1 != 0))) && (((( !(p3_l0 != 0)) && ( !(p3_l1 != 0))) || ((p3_l0 != 0) && ( !(p3_l1 != 0)))) || (((p3_l1 != 0) && ( !(p3_l0 != 0))) || ((p3_l0 != 0) && (p3_l1 != 0))))) && ((p3_x == 0.0) && (max_prop == p3_saved_max))) && ( !(proposed3 <= 0.0))) && ((p3_x <= proposed3) || ( !((p3_l1 != 0) && ( !(p3_l0 != 0)))))) && ((((((( !(p2_l0 != 0)) && ( !(p2_l1 != 0))) && (((( !(p2_l0 != 0)) && ( !(p2_l1 != 0))) || ((p2_l0 != 0) && ( !(p2_l1 != 0)))) || (((p2_l1 != 0) && ( !(p2_l0 != 0))) || ((p2_l0 != 0) && (p2_l1 != 0))))) && ((p2_x == 0.0) && (max_prop == p2_saved_max))) && ( !(proposed2 <= 0.0))) && ((p2_x <= proposed2) || ( !((p2_l1 != 0) && ( !(p2_l0 != 0)))))) && ((((((( !(p1_l0 != 0)) && ( !(p1_l1 != 0))) && (((( !(p1_l0 != 0)) && ( !(p1_l1 != 0))) || ((p1_l0 != 0) && ( !(p1_l1 != 0)))) || (((p1_l1 != 0) && ( !(p1_l0 != 0))) || ((p1_l0 != 0) && (p1_l1 != 0))))) && ((p1_x == 0.0) && (max_prop == p1_saved_max))) && ( !(proposed1 <= 0.0))) && ((p1_x <= proposed1) || ( !((p1_l1 != 0) && ( !(p1_l0 != 0)))))) && ((((((( !(p0_l0 != 0)) && ( !(p0_l1 != 0))) && (((( !(p0_l0 != 0)) && ( !(p0_l1 != 0))) || ((p0_l0 != 0) && ( !(p0_l1 != 0)))) || (((p0_l1 != 0) && ( !(p0_l0 != 0))) || ((p0_l0 != 0) && (p0_l1 != 0))))) && ((p0_x == 0.0) && (max_prop == p0_saved_max))) && ( !(proposed0 <= 0.0))) && ((p0_x <= proposed0) || ( !((p0_l1 != 0) && ( !(p0_l0 != 0)))))) && ((((((((((((((((id3 != 0) && (( !(id2 != 0)) && ((id0 != 0) && ( !(id1 != 0))))) || (((id3 != 0) && (( !(id2 != 0)) && (( !(id0 != 0)) && ( !(id1 != 0))))) || ((( !(id3 != 0)) && ((id2 != 0) && ((id0 != 0) && (id1 != 0)))) || ((( !(id3 != 0)) && ((id2 != 0) && ((id1 != 0) && ( !(id0 != 0))))) || ((( !(id3 != 0)) && ((id2 != 0) && ((id0 != 0) && ( !(id1 != 0))))) || ((( !(id3 != 0)) && ((id2 != 0) && (( !(id0 != 0)) && ( !(id1 != 0))))) || ((( !(id3 != 0)) && (( !(id2 != 0)) && ((id0 != 0) && (id1 != 0)))) || ((( !(id3 != 0)) && (( !(id2 != 0)) && ((id1 != 0) && ( !(id0 != 0))))) || ((( !(id3 != 0)) && (( !(id2 != 0)) && (( !(id0 != 0)) && ( !(id1 != 0))))) || (( !(id3 != 0)) && (( !(id2 != 0)) && ((id0 != 0) && ( !(id1 != 0)))))))))))))) && (((turn3 != 0) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) || ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && (turn1 != 0)))) || ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn1 != 0) && ( !(turn0 != 0))))) || ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && ( !(turn1 != 0))))) || ((( !(turn3 != 0)) && ((turn2 != 0) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) || ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && (turn1 != 0)))) || ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn1 != 0) && ( !(turn0 != 0))))) || ((( !(turn3 != 0)) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) || (( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && ( !(turn1 != 0)))))))))))))) && ((( !(id3 != 0)) && (( !(id2 != 0)) && (( !(id0 != 0)) && ( !(id1 != 0))))) && (inc_max_prop != 0))) && (0.0 <= delta)) && (proposed0 <= max_prop)) && (proposed1 <= max_prop)) && (proposed2 <= max_prop)) && (proposed3 <= max_prop)) && (proposed4 <= max_prop)) && (proposed5 <= max_prop)) && (proposed6 <= max_prop)) && (proposed7 <= max_prop)) && (proposed8 <= max_prop)) && (((((((((proposed0 == max_prop) || (proposed1 == max_prop)) || (proposed2 == max_prop)) || (proposed3 == max_prop)) || (proposed4 == max_prop)) || (proposed5 == max_prop)) || (proposed6 == max_prop)) || (proposed7 == max_prop)) || (proposed8 == max_prop)))))))))))) && (delta == _diverge_delta));
  while (__ok) {
    _x_p8_l1 = __VERIFIER_nondet_bool();
    _x_p8_l0 = __VERIFIER_nondet_bool();
    _x_p8_saved_max = __VERIFIER_nondet_float();
    _x_p7_l1 = __VERIFIER_nondet_bool();
    _x_p8_x = __VERIFIER_nondet_float();
    _x_p7_l0 = __VERIFIER_nondet_bool();
    _x_p6_saved_max = __VERIFIER_nondet_float();
    _x_p5_l1 = __VERIFIER_nondet_bool();
    _x_p3_saved_max = __VERIFIER_nondet_float();
    _x_p2_l1 = __VERIFIER_nondet_bool();
    _x_p3_x = __VERIFIER_nondet_float();
    _x_p2_l0 = __VERIFIER_nondet_bool();
    _x_turn1 = __VERIFIER_nondet_bool();
    _x_p2_saved_max = __VERIFIER_nondet_float();
    _x_p1_l1 = __VERIFIER_nondet_bool();
    _x_proposed1 = __VERIFIER_nondet_float();
    _x_id1 = __VERIFIER_nondet_bool();
    _x_turn0 = __VERIFIER_nondet_bool();
    _x_p2_x = __VERIFIER_nondet_float();
    _x_p1_l0 = __VERIFIER_nondet_bool();
    _x_turn3 = __VERIFIER_nondet_bool();
    _x_turn2 = __VERIFIER_nondet_bool();
    _x_p7_x = __VERIFIER_nondet_float();
    _x_p6_l0 = __VERIFIER_nondet_bool();
    _x_proposed3 = __VERIFIER_nondet_float();
    _x_id3 = __VERIFIER_nondet_bool();
    _x_id2 = __VERIFIER_nondet_bool();
    _x_proposed2 = __VERIFIER_nondet_float();
    _x_proposed0 = __VERIFIER_nondet_float();
    _x_id0 = __VERIFIER_nondet_bool();
    _x_p4_saved_max = __VERIFIER_nondet_float();
    _x_p3_l1 = __VERIFIER_nondet_bool();
    _x_p0_saved_max = __VERIFIER_nondet_float();
    _x_p6_x = __VERIFIER_nondet_float();
    _x_p5_l0 = __VERIFIER_nondet_bool();
    _x_inc_max_prop = __VERIFIER_nondet_bool();
    _x_delta = __VERIFIER_nondet_float();
    _x_max_prop = __VERIFIER_nondet_float();
    _x_p1_saved_max = __VERIFIER_nondet_float();
    _x_p7_saved_max = __VERIFIER_nondet_float();
    _x_p6_l1 = __VERIFIER_nondet_bool();
    _x_proposed4 = __VERIFIER_nondet_float();
    _x_proposed5 = __VERIFIER_nondet_float();
    _x_proposed6 = __VERIFIER_nondet_float();
    _x_proposed7 = __VERIFIER_nondet_float();
    _x_proposed8 = __VERIFIER_nondet_float();
    _x_p1_x = __VERIFIER_nondet_float();
    _x_p4_x = __VERIFIER_nondet_float();
    _x_p3_l0 = __VERIFIER_nondet_bool();
    _x_p0_x = __VERIFIER_nondet_float();
    _x_p5_x = __VERIFIER_nondet_float();
    _x_p4_l0 = __VERIFIER_nondet_bool();
    _x_p0_l0 = __VERIFIER_nondet_bool();
    _x__diverge_delta = __VERIFIER_nondet_float();
    _x_p5_saved_max = __VERIFIER_nondet_float();
    _x_p4_l1 = __VERIFIER_nondet_bool();
    _x_p0_l1 = __VERIFIER_nondet_bool();

    __ok = ((((((((((((( !(_x_p8_l0 != 0)) && ( !(_x_p8_l1 != 0))) || ((_x_p8_l0 != 0) && ( !(_x_p8_l1 != 0)))) || (((_x_p8_l1 != 0) && ( !(_x_p8_l0 != 0))) || ((_x_p8_l0 != 0) && (_x_p8_l1 != 0)))) && ( !(_x_proposed8 <= 0.0))) && ((_x_p8_x <= _x_proposed8) || ( !((_x_p8_l1 != 0) && ( !(_x_p8_l0 != 0)))))) && ((((((p8_l0 != 0) == (_x_p8_l0 != 0)) && ((p8_l1 != 0) == (_x_p8_l1 != 0))) && ((delta + (p8_x + (-1.0 * _x_p8_x))) == 0.0)) && ((p8_saved_max == _x_p8_saved_max) && (proposed8 == _x_proposed8))) || ( !(( !(delta <= 0.0)) || ( !((turn3 != 0) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0)))))))))) && ((((((_x_p8_l1 != 0) && ( !(_x_p8_l0 != 0))) && (_x_p8_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed8 == _x_proposed8))) && (max_prop == _x_p8_saved_max)) || ( !((( !(p8_l0 != 0)) && ( !(p8_l1 != 0))) && (((turn3 != 0) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p8_saved_max) && ((((_x_p8_l0 != 0) && ( !(_x_p8_l1 != 0))) && (_x_p8_x == 0.0)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && (( !(_x_id0 != 0)) && ( !(_x_id1 != 0))))) && (proposed8 == _x_proposed8)))) || ( !(((p8_l1 != 0) && ( !(p8_l0 != 0))) && (((turn3 != 0) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed8 == _x_proposed8)) && ((max_prop == _x_p8_saved_max) && (((( !(_x_p8_l0 != 0)) && ( !(_x_p8_l1 != 0))) && (_x_p8_x == 0.0)) || (((_x_p8_l0 != 0) && (_x_p8_l1 != 0)) && (p8_x == _x_p8_x))))) || ( !(((p8_l0 != 0) && ( !(p8_l1 != 0))) && (((turn3 != 0) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p8_saved_max) && (((( !(_x_p8_l0 != 0)) && ( !(_x_p8_l1 != 0))) && (p8_x == _x_p8_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed8 <= _x_proposed8))))) || ( !(((p8_l0 != 0) && (p8_l1 != 0)) && (((turn3 != 0) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((((((((((( !(_x_p7_l0 != 0)) && ( !(_x_p7_l1 != 0))) || ((_x_p7_l0 != 0) && ( !(_x_p7_l1 != 0)))) || (((_x_p7_l1 != 0) && ( !(_x_p7_l0 != 0))) || ((_x_p7_l0 != 0) && (_x_p7_l1 != 0)))) && ( !(_x_proposed7 <= 0.0))) && ((_x_p7_x <= _x_proposed7) || ( !((_x_p7_l1 != 0) && ( !(_x_p7_l0 != 0)))))) && ((((((p7_l0 != 0) == (_x_p7_l0 != 0)) && ((p7_l1 != 0) == (_x_p7_l1 != 0))) && ((delta + (p7_x + (-1.0 * _x_p7_x))) == 0.0)) && ((p7_saved_max == _x_p7_saved_max) && (proposed7 == _x_proposed7))) || ( !(( !(delta <= 0.0)) || ( !(( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && (turn1 != 0))))))))) && ((((((_x_p7_l1 != 0) && ( !(_x_p7_l0 != 0))) && (_x_p7_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed7 == _x_proposed7))) && (max_prop == _x_p7_saved_max)) || ( !((( !(p7_l0 != 0)) && ( !(p7_l1 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && (turn1 != 0)))) && (delta == 0.0)))))) && (((max_prop == _x_p7_saved_max) && ((((_x_p7_l0 != 0) && ( !(_x_p7_l1 != 0))) && (_x_p7_x == 0.0)) && ((( !(_x_id3 != 0)) && ((_x_id2 != 0) && ((_x_id0 != 0) && (_x_id1 != 0)))) && (proposed7 == _x_proposed7)))) || ( !(((p7_l1 != 0) && ( !(p7_l0 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && (turn1 != 0)))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed7 == _x_proposed7)) && ((max_prop == _x_p7_saved_max) && (((( !(_x_p7_l0 != 0)) && ( !(_x_p7_l1 != 0))) && (_x_p7_x == 0.0)) || (((_x_p7_l0 != 0) && (_x_p7_l1 != 0)) && (p7_x == _x_p7_x))))) || ( !(((p7_l0 != 0) && ( !(p7_l1 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && (turn1 != 0)))) && (delta == 0.0)))))) && (((max_prop == _x_p7_saved_max) && (((( !(_x_p7_l0 != 0)) && ( !(_x_p7_l1 != 0))) && (p7_x == _x_p7_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed7 <= _x_proposed7))))) || ( !(((p7_l0 != 0) && (p7_l1 != 0)) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && (turn1 != 0)))) && (delta == 0.0)))))) && (((((((((((( !(_x_p6_l0 != 0)) && ( !(_x_p6_l1 != 0))) || ((_x_p6_l0 != 0) && ( !(_x_p6_l1 != 0)))) || (((_x_p6_l1 != 0) && ( !(_x_p6_l0 != 0))) || ((_x_p6_l0 != 0) && (_x_p6_l1 != 0)))) && ( !(_x_proposed6 <= 0.0))) && ((_x_p6_x <= _x_proposed6) || ( !((_x_p6_l1 != 0) && ( !(_x_p6_l0 != 0)))))) && ((((((p6_l0 != 0) == (_x_p6_l0 != 0)) && ((p6_l1 != 0) == (_x_p6_l1 != 0))) && ((delta + (p6_x + (-1.0 * _x_p6_x))) == 0.0)) && ((p6_saved_max == _x_p6_saved_max) && (proposed6 == _x_proposed6))) || ( !(( !(delta <= 0.0)) || ( !(( !(turn3 != 0)) && ((turn2 != 0) && ((turn1 != 0) && ( !(turn0 != 0)))))))))) && ((((((_x_p6_l1 != 0) && ( !(_x_p6_l0 != 0))) && (_x_p6_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed6 == _x_proposed6))) && (max_prop == _x_p6_saved_max)) || ( !((( !(p6_l0 != 0)) && ( !(p6_l1 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn1 != 0) && ( !(turn0 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p6_saved_max) && ((((_x_p6_l0 != 0) && ( !(_x_p6_l1 != 0))) && (_x_p6_x == 0.0)) && ((( !(_x_id3 != 0)) && ((_x_id2 != 0) && ((_x_id1 != 0) && ( !(_x_id0 != 0))))) && (proposed6 == _x_proposed6)))) || ( !(((p6_l1 != 0) && ( !(p6_l0 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn1 != 0) && ( !(turn0 != 0))))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed6 == _x_proposed6)) && ((max_prop == _x_p6_saved_max) && (((( !(_x_p6_l0 != 0)) && ( !(_x_p6_l1 != 0))) && (_x_p6_x == 0.0)) || (((_x_p6_l0 != 0) && (_x_p6_l1 != 0)) && (p6_x == _x_p6_x))))) || ( !(((p6_l0 != 0) && ( !(p6_l1 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn1 != 0) && ( !(turn0 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p6_saved_max) && (((( !(_x_p6_l0 != 0)) && ( !(_x_p6_l1 != 0))) && (p6_x == _x_p6_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed6 <= _x_proposed6))))) || ( !(((p6_l0 != 0) && (p6_l1 != 0)) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn1 != 0) && ( !(turn0 != 0))))) && (delta == 0.0)))))) && (((((((((((( !(_x_p5_l0 != 0)) && ( !(_x_p5_l1 != 0))) || ((_x_p5_l0 != 0) && ( !(_x_p5_l1 != 0)))) || (((_x_p5_l1 != 0) && ( !(_x_p5_l0 != 0))) || ((_x_p5_l0 != 0) && (_x_p5_l1 != 0)))) && ( !(_x_proposed5 <= 0.0))) && ((_x_p5_x <= _x_proposed5) || ( !((_x_p5_l1 != 0) && ( !(_x_p5_l0 != 0)))))) && ((((((p5_l0 != 0) == (_x_p5_l0 != 0)) && ((p5_l1 != 0) == (_x_p5_l1 != 0))) && ((delta + (p5_x + (-1.0 * _x_p5_x))) == 0.0)) && ((p5_saved_max == _x_p5_saved_max) && (proposed5 == _x_proposed5))) || ( !(( !(delta <= 0.0)) || ( !(( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && ( !(turn1 != 0)))))))))) && ((((((_x_p5_l1 != 0) && ( !(_x_p5_l0 != 0))) && (_x_p5_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed5 == _x_proposed5))) && (max_prop == _x_p5_saved_max)) || ( !((( !(p5_l0 != 0)) && ( !(p5_l1 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p5_saved_max) && ((((_x_p5_l0 != 0) && ( !(_x_p5_l1 != 0))) && (_x_p5_x == 0.0)) && ((( !(_x_id3 != 0)) && ((_x_id2 != 0) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && (proposed5 == _x_proposed5)))) || ( !(((p5_l1 != 0) && ( !(p5_l0 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed5 == _x_proposed5)) && ((max_prop == _x_p5_saved_max) && (((( !(_x_p5_l0 != 0)) && ( !(_x_p5_l1 != 0))) && (_x_p5_x == 0.0)) || (((_x_p5_l0 != 0) && (_x_p5_l1 != 0)) && (p5_x == _x_p5_x))))) || ( !(((p5_l0 != 0) && ( !(p5_l1 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p5_saved_max) && (((( !(_x_p5_l0 != 0)) && ( !(_x_p5_l1 != 0))) && (p5_x == _x_p5_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed5 <= _x_proposed5))))) || ( !(((p5_l0 != 0) && (p5_l1 != 0)) && ((( !(turn3 != 0)) && ((turn2 != 0) && ((turn0 != 0) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((((((((((( !(_x_p4_l0 != 0)) && ( !(_x_p4_l1 != 0))) || ((_x_p4_l0 != 0) && ( !(_x_p4_l1 != 0)))) || (((_x_p4_l1 != 0) && ( !(_x_p4_l0 != 0))) || ((_x_p4_l0 != 0) && (_x_p4_l1 != 0)))) && ( !(_x_proposed4 <= 0.0))) && ((_x_p4_x <= _x_proposed4) || ( !((_x_p4_l1 != 0) && ( !(_x_p4_l0 != 0)))))) && ((((((p4_l0 != 0) == (_x_p4_l0 != 0)) && ((p4_l1 != 0) == (_x_p4_l1 != 0))) && ((delta + (p4_x + (-1.0 * _x_p4_x))) == 0.0)) && ((p4_saved_max == _x_p4_saved_max) && (proposed4 == _x_proposed4))) || ( !(( !(delta <= 0.0)) || ( !(( !(turn3 != 0)) && ((turn2 != 0) && (( !(turn0 != 0)) && ( !(turn1 != 0)))))))))) && ((((((_x_p4_l1 != 0) && ( !(_x_p4_l0 != 0))) && (_x_p4_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed4 == _x_proposed4))) && (max_prop == _x_p4_saved_max)) || ( !((( !(p4_l0 != 0)) && ( !(p4_l1 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p4_saved_max) && ((((_x_p4_l0 != 0) && ( !(_x_p4_l1 != 0))) && (_x_p4_x == 0.0)) && ((( !(_x_id3 != 0)) && ((_x_id2 != 0) && (( !(_x_id0 != 0)) && ( !(_x_id1 != 0))))) && (proposed4 == _x_proposed4)))) || ( !(((p4_l1 != 0) && ( !(p4_l0 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed4 == _x_proposed4)) && ((max_prop == _x_p4_saved_max) && (((( !(_x_p4_l0 != 0)) && ( !(_x_p4_l1 != 0))) && (_x_p4_x == 0.0)) || (((_x_p4_l0 != 0) && (_x_p4_l1 != 0)) && (p4_x == _x_p4_x))))) || ( !(((p4_l0 != 0) && ( !(p4_l1 != 0))) && ((( !(turn3 != 0)) && ((turn2 != 0) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p4_saved_max) && (((( !(_x_p4_l0 != 0)) && ( !(_x_p4_l1 != 0))) && (p4_x == _x_p4_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed4 <= _x_proposed4))))) || ( !(((p4_l0 != 0) && (p4_l1 != 0)) && ((( !(turn3 != 0)) && ((turn2 != 0) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((((((((((( !(_x_p3_l0 != 0)) && ( !(_x_p3_l1 != 0))) || ((_x_p3_l0 != 0) && ( !(_x_p3_l1 != 0)))) || (((_x_p3_l1 != 0) && ( !(_x_p3_l0 != 0))) || ((_x_p3_l0 != 0) && (_x_p3_l1 != 0)))) && ( !(_x_proposed3 <= 0.0))) && ((_x_p3_x <= _x_proposed3) || ( !((_x_p3_l1 != 0) && ( !(_x_p3_l0 != 0)))))) && ((((((p3_l0 != 0) == (_x_p3_l0 != 0)) && ((p3_l1 != 0) == (_x_p3_l1 != 0))) && ((delta + (p3_x + (-1.0 * _x_p3_x))) == 0.0)) && ((p3_saved_max == _x_p3_saved_max) && (proposed3 == _x_proposed3))) || ( !(( !(delta <= 0.0)) || ( !(( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && (turn1 != 0))))))))) && ((((((_x_p3_l1 != 0) && ( !(_x_p3_l0 != 0))) && (_x_p3_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed3 == _x_proposed3))) && (max_prop == _x_p3_saved_max)) || ( !((( !(p3_l0 != 0)) && ( !(p3_l1 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && (turn1 != 0)))) && (delta == 0.0)))))) && (((max_prop == _x_p3_saved_max) && ((((_x_p3_l0 != 0) && ( !(_x_p3_l1 != 0))) && (_x_p3_x == 0.0)) && ((( !(_x_id3 != 0)) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && (_x_id1 != 0)))) && (proposed3 == _x_proposed3)))) || ( !(((p3_l1 != 0) && ( !(p3_l0 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && (turn1 != 0)))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed3 == _x_proposed3)) && ((max_prop == _x_p3_saved_max) && (((( !(_x_p3_l0 != 0)) && ( !(_x_p3_l1 != 0))) && (_x_p3_x == 0.0)) || (((_x_p3_l0 != 0) && (_x_p3_l1 != 0)) && (p3_x == _x_p3_x))))) || ( !(((p3_l0 != 0) && ( !(p3_l1 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && (turn1 != 0)))) && (delta == 0.0)))))) && (((max_prop == _x_p3_saved_max) && (((( !(_x_p3_l0 != 0)) && ( !(_x_p3_l1 != 0))) && (p3_x == _x_p3_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed3 <= _x_proposed3))))) || ( !(((p3_l0 != 0) && (p3_l1 != 0)) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && (turn1 != 0)))) && (delta == 0.0)))))) && (((((((((((( !(_x_p2_l0 != 0)) && ( !(_x_p2_l1 != 0))) || ((_x_p2_l0 != 0) && ( !(_x_p2_l1 != 0)))) || (((_x_p2_l1 != 0) && ( !(_x_p2_l0 != 0))) || ((_x_p2_l0 != 0) && (_x_p2_l1 != 0)))) && ( !(_x_proposed2 <= 0.0))) && ((_x_p2_x <= _x_proposed2) || ( !((_x_p2_l1 != 0) && ( !(_x_p2_l0 != 0)))))) && ((((((p2_l0 != 0) == (_x_p2_l0 != 0)) && ((p2_l1 != 0) == (_x_p2_l1 != 0))) && ((delta + (p2_x + (-1.0 * _x_p2_x))) == 0.0)) && ((p2_saved_max == _x_p2_saved_max) && (proposed2 == _x_proposed2))) || ( !(( !(delta <= 0.0)) || ( !(( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn1 != 0) && ( !(turn0 != 0)))))))))) && ((((((_x_p2_l1 != 0) && ( !(_x_p2_l0 != 0))) && (_x_p2_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed2 == _x_proposed2))) && (max_prop == _x_p2_saved_max)) || ( !((( !(p2_l0 != 0)) && ( !(p2_l1 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn1 != 0) && ( !(turn0 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p2_saved_max) && ((((_x_p2_l0 != 0) && ( !(_x_p2_l1 != 0))) && (_x_p2_x == 0.0)) && ((( !(_x_id3 != 0)) && (( !(_x_id2 != 0)) && ((_x_id1 != 0) && ( !(_x_id0 != 0))))) && (proposed2 == _x_proposed2)))) || ( !(((p2_l1 != 0) && ( !(p2_l0 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn1 != 0) && ( !(turn0 != 0))))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed2 == _x_proposed2)) && ((max_prop == _x_p2_saved_max) && (((( !(_x_p2_l0 != 0)) && ( !(_x_p2_l1 != 0))) && (_x_p2_x == 0.0)) || (((_x_p2_l0 != 0) && (_x_p2_l1 != 0)) && (p2_x == _x_p2_x))))) || ( !(((p2_l0 != 0) && ( !(p2_l1 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn1 != 0) && ( !(turn0 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p2_saved_max) && (((( !(_x_p2_l0 != 0)) && ( !(_x_p2_l1 != 0))) && (p2_x == _x_p2_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed2 <= _x_proposed2))))) || ( !(((p2_l0 != 0) && (p2_l1 != 0)) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn1 != 0) && ( !(turn0 != 0))))) && (delta == 0.0)))))) && (((((((((((( !(_x_p1_l0 != 0)) && ( !(_x_p1_l1 != 0))) || ((_x_p1_l0 != 0) && ( !(_x_p1_l1 != 0)))) || (((_x_p1_l1 != 0) && ( !(_x_p1_l0 != 0))) || ((_x_p1_l0 != 0) && (_x_p1_l1 != 0)))) && ( !(_x_proposed1 <= 0.0))) && ((_x_p1_x <= _x_proposed1) || ( !((_x_p1_l1 != 0) && ( !(_x_p1_l0 != 0)))))) && ((((((p1_l0 != 0) == (_x_p1_l0 != 0)) && ((p1_l1 != 0) == (_x_p1_l1 != 0))) && ((delta + (p1_x + (-1.0 * _x_p1_x))) == 0.0)) && ((p1_saved_max == _x_p1_saved_max) && (proposed1 == _x_proposed1))) || ( !(( !(delta <= 0.0)) || ( !(( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && ( !(turn1 != 0)))))))))) && ((((((_x_p1_l1 != 0) && ( !(_x_p1_l0 != 0))) && (_x_p1_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed1 == _x_proposed1))) && (max_prop == _x_p1_saved_max)) || ( !((( !(p1_l0 != 0)) && ( !(p1_l1 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p1_saved_max) && ((((_x_p1_l0 != 0) && ( !(_x_p1_l1 != 0))) && (_x_p1_x == 0.0)) && ((( !(_x_id3 != 0)) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && (proposed1 == _x_proposed1)))) || ( !(((p1_l1 != 0) && ( !(p1_l0 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed1 == _x_proposed1)) && ((max_prop == _x_p1_saved_max) && (((( !(_x_p1_l0 != 0)) && ( !(_x_p1_l1 != 0))) && (_x_p1_x == 0.0)) || (((_x_p1_l0 != 0) && (_x_p1_l1 != 0)) && (p1_x == _x_p1_x))))) || ( !(((p1_l0 != 0) && ( !(p1_l1 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p1_saved_max) && (((( !(_x_p1_l0 != 0)) && ( !(_x_p1_l1 != 0))) && (p1_x == _x_p1_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed1 <= _x_proposed1))))) || ( !(((p1_l0 != 0) && (p1_l1 != 0)) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && ((turn0 != 0) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((((((((((( !(_x_p0_l0 != 0)) && ( !(_x_p0_l1 != 0))) || ((_x_p0_l0 != 0) && ( !(_x_p0_l1 != 0)))) || (((_x_p0_l1 != 0) && ( !(_x_p0_l0 != 0))) || ((_x_p0_l0 != 0) && (_x_p0_l1 != 0)))) && ( !(_x_proposed0 <= 0.0))) && ((_x_p0_x <= _x_proposed0) || ( !((_x_p0_l1 != 0) && ( !(_x_p0_l0 != 0)))))) && ((((((p0_l0 != 0) == (_x_p0_l0 != 0)) && ((p0_l1 != 0) == (_x_p0_l1 != 0))) && ((delta + (p0_x + (-1.0 * _x_p0_x))) == 0.0)) && ((p0_saved_max == _x_p0_saved_max) && (proposed0 == _x_proposed0))) || ( !(( !(delta <= 0.0)) || ( !(( !(turn3 != 0)) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0)))))))))) && ((((((_x_p0_l1 != 0) && ( !(_x_p0_l0 != 0))) && (_x_p0_x == 0.0)) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed0 == _x_proposed0))) && (max_prop == _x_p0_saved_max)) || ( !((( !(p0_l0 != 0)) && ( !(p0_l1 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p0_saved_max) && ((((_x_p0_l0 != 0) && ( !(_x_p0_l1 != 0))) && (_x_p0_x == 0.0)) && ((( !(_x_id3 != 0)) && (( !(_x_id2 != 0)) && (( !(_x_id0 != 0)) && ( !(_x_id1 != 0))))) && (proposed0 == _x_proposed0)))) || ( !(((p0_l1 != 0) && ( !(p0_l0 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && ((((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (proposed0 == _x_proposed0)) && ((max_prop == _x_p0_saved_max) && (((( !(_x_p0_l0 != 0)) && ( !(_x_p0_l1 != 0))) && (_x_p0_x == 0.0)) || (((_x_p0_l0 != 0) && (_x_p0_l1 != 0)) && (p0_x == _x_p0_x))))) || ( !(((p0_l0 != 0) && ( !(p0_l1 != 0))) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((max_prop == _x_p0_saved_max) && (((( !(_x_p0_l0 != 0)) && ( !(_x_p0_l1 != 0))) && (p0_x == _x_p0_x)) && (((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) && ( !(proposed0 <= _x_proposed0))))) || ( !(((p0_l0 != 0) && (p0_l1 != 0)) && ((( !(turn3 != 0)) && (( !(turn2 != 0)) && (( !(turn0 != 0)) && ( !(turn1 != 0))))) && (delta == 0.0)))))) && (((((((((((((((((_x_id3 != 0) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) || (((_x_id3 != 0) && (( !(_x_id2 != 0)) && (( !(_x_id0 != 0)) && ( !(_x_id1 != 0))))) || ((( !(_x_id3 != 0)) && ((_x_id2 != 0) && ((_x_id0 != 0) && (_x_id1 != 0)))) || ((( !(_x_id3 != 0)) && ((_x_id2 != 0) && ((_x_id1 != 0) && ( !(_x_id0 != 0))))) || ((( !(_x_id3 != 0)) && ((_x_id2 != 0) && ((_x_id0 != 0) && ( !(_x_id1 != 0))))) || ((( !(_x_id3 != 0)) && ((_x_id2 != 0) && (( !(_x_id0 != 0)) && ( !(_x_id1 != 0))))) || ((( !(_x_id3 != 0)) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && (_x_id1 != 0)))) || ((( !(_x_id3 != 0)) && (( !(_x_id2 != 0)) && ((_x_id1 != 0) && ( !(_x_id0 != 0))))) || ((( !(_x_id3 != 0)) && (( !(_x_id2 != 0)) && (( !(_x_id0 != 0)) && ( !(_x_id1 != 0))))) || (( !(_x_id3 != 0)) && (( !(_x_id2 != 0)) && ((_x_id0 != 0) && ( !(_x_id1 != 0)))))))))))))) && (((_x_turn3 != 0) && (( !(_x_turn2 != 0)) && (( !(_x_turn0 != 0)) && ( !(_x_turn1 != 0))))) || ((( !(_x_turn3 != 0)) && ((_x_turn2 != 0) && ((_x_turn0 != 0) && (_x_turn1 != 0)))) || ((( !(_x_turn3 != 0)) && ((_x_turn2 != 0) && ((_x_turn1 != 0) && ( !(_x_turn0 != 0))))) || ((( !(_x_turn3 != 0)) && ((_x_turn2 != 0) && ((_x_turn0 != 0) && ( !(_x_turn1 != 0))))) || ((( !(_x_turn3 != 0)) && ((_x_turn2 != 0) && (( !(_x_turn0 != 0)) && ( !(_x_turn1 != 0))))) || ((( !(_x_turn3 != 0)) && (( !(_x_turn2 != 0)) && ((_x_turn0 != 0) && (_x_turn1 != 0)))) || ((( !(_x_turn3 != 0)) && (( !(_x_turn2 != 0)) && ((_x_turn1 != 0) && ( !(_x_turn0 != 0))))) || ((( !(_x_turn3 != 0)) && (( !(_x_turn2 != 0)) && (( !(_x_turn0 != 0)) && ( !(_x_turn1 != 0))))) || (( !(_x_turn3 != 0)) && (( !(_x_turn2 != 0)) && ((_x_turn0 != 0) && ( !(_x_turn1 != 0)))))))))))))) && ((delta <= 0.0) || ((_x_inc_max_prop != 0) && ((((((id0 != 0) == (_x_id0 != 0)) && ((id1 != 0) == (_x_id1 != 0))) && ((id2 != 0) == (_x_id2 != 0))) && ((id3 != 0) == (_x_id3 != 0))) && (((((turn0 != 0) == (_x_turn0 != 0)) && ((turn1 != 0) == (_x_turn1 != 0))) && ((turn2 != 0) == (_x_turn2 != 0))) && ((turn3 != 0) == (_x_turn3 != 0))))))) && (0.0 <= _x_delta)) && (_x_proposed0 <= _x_max_prop)) && (_x_proposed1 <= _x_max_prop)) && (_x_proposed2 <= _x_max_prop)) && (_x_proposed3 <= _x_max_prop)) && (_x_proposed4 <= _x_max_prop)) && (_x_proposed5 <= _x_max_prop)) && (_x_proposed6 <= _x_max_prop)) && (_x_proposed7 <= _x_max_prop)) && (_x_proposed8 <= _x_max_prop)) && (((((((((_x_proposed0 == _x_max_prop) || (_x_proposed1 == _x_max_prop)) || (_x_proposed2 == _x_max_prop)) || (_x_proposed3 == _x_max_prop)) || (_x_proposed4 == _x_max_prop)) || (_x_proposed5 == _x_max_prop)) || (_x_proposed6 == _x_max_prop)) || (_x_proposed7 == _x_max_prop)) || (_x_proposed8 == _x_max_prop))) && ((_x_inc_max_prop != 0) == (max_prop <= _x_max_prop)))))))))))) && (((delta == _x__diverge_delta) || ( !(1.0 <= _diverge_delta))) && ((1.0 <= _diverge_delta) || ((delta + (_diverge_delta + (-1.0 * _x__diverge_delta))) == 0.0))));
    p8_l1 = _x_p8_l1;
    p8_l0 = _x_p8_l0;
    p8_saved_max = _x_p8_saved_max;
    p7_l1 = _x_p7_l1;
    p8_x = _x_p8_x;
    p7_l0 = _x_p7_l0;
    p6_saved_max = _x_p6_saved_max;
    p5_l1 = _x_p5_l1;
    p3_saved_max = _x_p3_saved_max;
    p2_l1 = _x_p2_l1;
    p3_x = _x_p3_x;
    p2_l0 = _x_p2_l0;
    turn1 = _x_turn1;
    p2_saved_max = _x_p2_saved_max;
    p1_l1 = _x_p1_l1;
    proposed1 = _x_proposed1;
    id1 = _x_id1;
    turn0 = _x_turn0;
    p2_x = _x_p2_x;
    p1_l0 = _x_p1_l0;
    turn3 = _x_turn3;
    turn2 = _x_turn2;
    p7_x = _x_p7_x;
    p6_l0 = _x_p6_l0;
    proposed3 = _x_proposed3;
    id3 = _x_id3;
    id2 = _x_id2;
    proposed2 = _x_proposed2;
    proposed0 = _x_proposed0;
    id0 = _x_id0;
    p4_saved_max = _x_p4_saved_max;
    p3_l1 = _x_p3_l1;
    p0_saved_max = _x_p0_saved_max;
    p6_x = _x_p6_x;
    p5_l0 = _x_p5_l0;
    inc_max_prop = _x_inc_max_prop;
    delta = _x_delta;
    max_prop = _x_max_prop;
    p1_saved_max = _x_p1_saved_max;
    p7_saved_max = _x_p7_saved_max;
    p6_l1 = _x_p6_l1;
    proposed4 = _x_proposed4;
    proposed5 = _x_proposed5;
    proposed6 = _x_proposed6;
    proposed7 = _x_proposed7;
    proposed8 = _x_proposed8;
    p1_x = _x_p1_x;
    p4_x = _x_p4_x;
    p3_l0 = _x_p3_l0;
    p0_x = _x_p0_x;
    p5_x = _x_p5_x;
    p4_l0 = _x_p4_l0;
    p0_l0 = _x_p0_l0;
    _diverge_delta = _x__diverge_delta;
    p5_saved_max = _x_p5_saved_max;
    p4_l1 = _x_p4_l1;
    p0_l1 = _x_p0_l1;

  }
}
