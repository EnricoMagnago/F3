extern float __VERIFIER_nondet_float(void);
extern int __VERIFIER_nondet_int(void);
typedef enum {false, true} bool;
bool __VERIFIER_nondet_bool(void) {
  return __VERIFIER_nondet_int() != 0;
}

int main()
{
float x_1, _x_x_1;
float x_3, _x_x_3;
float x_2, _x_x_2;
float x_0, _x_x_0;

  int __steps_to_fair = __VERIFIER_nondet_int();
  x_1 = __VERIFIER_nondet_float();
  x_3 = __VERIFIER_nondet_float();
  x_2 = __VERIFIER_nondet_float();
  x_0 = __VERIFIER_nondet_float();

  bool __ok = (1 && ( !((-12.0 <= (x_0 + (-1.0 * x_3))) && ((-12.0 <= (x_0 + (-1.0 * x_3))) || (6.0 <= (x_0 + (-1.0 * x_3)))))));
  while (__steps_to_fair >= 0 && __ok) {
    if (( !0)) {
      __steps_to_fair = __VERIFIER_nondet_int();
    } else {
      __steps_to_fair--;
    }
    _x_x_1 = __VERIFIER_nondet_float();
    _x_x_3 = __VERIFIER_nondet_float();
    _x_x_2 = __VERIFIER_nondet_float();
    _x_x_0 = __VERIFIER_nondet_float();

    __ok = ((((((((x_1 + (-1.0 * _x_x_0)) <= -16.0) && ((x_3 + (-1.0 * _x_x_0)) <= -13.0)) && (((x_1 + (-1.0 * _x_x_0)) == -16.0) || ((x_3 + (-1.0 * _x_x_0)) == -13.0))) && ((((x_0 + (-1.0 * _x_x_1)) <= -4.0) && ((x_1 + (-1.0 * _x_x_1)) <= -9.0)) && (((x_0 + (-1.0 * _x_x_1)) == -4.0) || ((x_1 + (-1.0 * _x_x_1)) == -9.0)))) && ((((x_1 + (-1.0 * _x_x_2)) <= -16.0) && ((x_3 + (-1.0 * _x_x_2)) <= -17.0)) && (((x_1 + (-1.0 * _x_x_2)) == -16.0) || ((x_3 + (-1.0 * _x_x_2)) == -17.0)))) && ((((x_1 + (-1.0 * _x_x_3)) <= -4.0) && ((x_2 + (-1.0 * _x_x_3)) <= -15.0)) && (((x_1 + (-1.0 * _x_x_3)) == -4.0) || ((x_2 + (-1.0 * _x_x_3)) == -15.0)))) && 1);
    x_1 = _x_x_1;
    x_3 = _x_x_3;
    x_2 = _x_x_2;
    x_0 = _x_x_0;

  }
}
