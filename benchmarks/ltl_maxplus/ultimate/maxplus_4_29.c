//@ ltl invariant negative: ((X (<> (x_2 - x_1 >= 4))) R (x_1 - x_0 > -20));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((6.0 + v0) > (19.0 + v2)? (6.0 + v0) : (19.0 + v2));
_x_v1 = ((14.0 + v1) > (8.0 + v3)? (14.0 + v1) : (8.0 + v3));
_x_v2 = ((10.0 + v0) > (16.0 + v1)? (10.0 + v0) : (16.0 + v1));
_x_v3 = ((16.0 + v0) > (17.0 + v2)? (16.0 + v0) : (17.0 + v2));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}