extern float __VERIFIER_nondet_float(void);
extern int __VERIFIER_nondet_int(void);
typedef enum {false, true} bool;
bool __VERIFIER_nondet_bool(void) {
  return __VERIFIER_nondet_int() != 0;
}

int main()
{
bool _EL_X_100, _x__EL_X_100;
float x_3, _x_x_3;
float x_0, _x_x_0;
float x_1, _x_x_1;
float x_2, _x_x_2;
bool _EL_U_99, _x__EL_U_99;

  int __steps_to_fair = __VERIFIER_nondet_int();
  _EL_X_100 = __VERIFIER_nondet_bool();
  x_3 = __VERIFIER_nondet_float();
  x_0 = __VERIFIER_nondet_float();
  x_1 = __VERIFIER_nondet_float();
  x_2 = __VERIFIER_nondet_float();
  _EL_U_99 = __VERIFIER_nondet_bool();

  bool __ok = (1 && ( !(((x_1 + (-1.0 * x_3)) <= 9.0) || _EL_X_100)));
  while (__steps_to_fair >= 0 && __ok) {
    if ((( !(-18.0 <= (x_0 + (-1.0 * x_2)))) || ( !(( !(-18.0 <= (x_0 + (-1.0 * x_2)))) || _EL_U_99)))) {
      __steps_to_fair = __VERIFIER_nondet_int();
    } else {
      __steps_to_fair--;
    }
    _x__EL_X_100 = __VERIFIER_nondet_bool();
    _x_x_3 = __VERIFIER_nondet_float();
    _x_x_0 = __VERIFIER_nondet_float();
    _x_x_1 = __VERIFIER_nondet_float();
    _x_x_2 = __VERIFIER_nondet_float();
    _x__EL_U_99 = __VERIFIER_nondet_bool();

    __ok = ((((((((x_1 + (-1.0 * _x_x_0)) <= -19.0) && ((x_3 + (-1.0 * _x_x_0)) <= -13.0)) && (((x_1 + (-1.0 * _x_x_0)) == -19.0) || ((x_3 + (-1.0 * _x_x_0)) == -13.0))) && ((((x_0 + (-1.0 * _x_x_1)) <= -11.0) && ((x_2 + (-1.0 * _x_x_1)) <= -9.0)) && (((x_0 + (-1.0 * _x_x_1)) == -11.0) || ((x_2 + (-1.0 * _x_x_1)) == -9.0)))) && ((((x_0 + (-1.0 * _x_x_2)) <= -18.0) && ((x_2 + (-1.0 * _x_x_2)) <= -14.0)) && (((x_0 + (-1.0 * _x_x_2)) == -18.0) || ((x_2 + (-1.0 * _x_x_2)) == -14.0)))) && ((((x_1 + (-1.0 * _x_x_3)) <= -3.0) && ((x_2 + (-1.0 * _x_x_3)) <= -16.0)) && (((x_1 + (-1.0 * _x_x_3)) == -3.0) || ((x_2 + (-1.0 * _x_x_3)) == -16.0)))) && ((_EL_U_99 == (_x__EL_U_99 || ( !(-18.0 <= (_x_x_0 + (-1.0 * _x_x_2)))))) && (_EL_X_100 == (_x__EL_U_99 || ( !(-18.0 <= (_x_x_0 + (-1.0 * _x_x_2))))))));
    _EL_X_100 = _x__EL_X_100;
    x_3 = _x_x_3;
    x_0 = _x_x_0;
    x_1 = _x_x_1;
    x_2 = _x_x_2;
    _EL_U_99 = _x__EL_U_99;

  }
}
