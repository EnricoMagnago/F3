//@ ltl invariant negative: (([] (x_1 - x_2 > -9)) && (<> (x_2 - x_1 > -6)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((17.0 + v0) > (17.0 + v2)? (17.0 + v0) : (17.0 + v2));
_x_v1 = ((13.0 + v0) > (19.0 + v3)? (13.0 + v0) : (19.0 + v3));
_x_v2 = ((3.0 + v2) > (2.0 + v3)? (3.0 + v2) : (2.0 + v3));
_x_v3 = ((2.0 + v0) > (2.0 + v1)? (2.0 + v0) : (2.0 + v1));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}