//@ ltl invariant negative: ([] ((x_1 - x_0 >= -4) || (X (x_3 - x_0 > -9))));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((5.0 + v0) > (10.0 + v2)? (5.0 + v0) : (10.0 + v2));
_x_v1 = ((18.0 + v2) > (14.0 + v3)? (18.0 + v2) : (14.0 + v3));
_x_v2 = ((17.0 + v1) > (13.0 + v3)? (17.0 + v1) : (13.0 + v3));
_x_v3 = ((20.0 + v0) > (14.0 + v3)? (20.0 + v0) : (14.0 + v3));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}
