//@ ltl invariant negative: ([] (X ((x_2 - x_0 >= -3) R (x_0 - x_1 > -17))));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((10.0 + v1) > (12.0 + v3)? (10.0 + v1) : (12.0 + v3));
_x_v1 = ((4.0 + v0) > (18.0 + v2)? (4.0 + v0) : (18.0 + v2));
_x_v2 = ((14.0 + v0) > (19.0 + v3)? (14.0 + v0) : (19.0 + v3));
_x_v3 = ((4.0 + v2) > (18.0 + v3)? (4.0 + v2) : (18.0 + v3));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}
