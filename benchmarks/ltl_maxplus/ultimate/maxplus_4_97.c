//@ ltl invariant negative: ([] ((X (x_1 - x_2 > -10)) U (x_3 - x_0 > -4)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((7.0 + v2) > (9.0 + v3)? (7.0 + v2) : (9.0 + v3));
_x_v1 = ((15.0 + v0) > (13.0 + v1)? (15.0 + v0) : (13.0 + v1));
_x_v2 = ((13.0 + v1) > (10.0 + v2)? (13.0 + v1) : (10.0 + v2));
_x_v3 = ((3.0 + v0) > (11.0 + v3)? (3.0 + v0) : (11.0 + v3));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}