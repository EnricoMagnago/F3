//@ ltl invariant negative: (([] (x_0 - x_1 > -17)) U (X (x_0 - x_1 >= 6)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((17.0 + v2) > (8.0 + v3)? (17.0 + v2) : (8.0 + v3));
_x_v1 = ((18.0 + v1) > (13.0 + v3)? (18.0 + v1) : (13.0 + v3));
_x_v2 = ((14.0 + v2) > (3.0 + v3)? (14.0 + v2) : (3.0 + v3));
_x_v3 = ((5.0 + v0) > (12.0 + v1)? (5.0 + v0) : (12.0 + v1));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}