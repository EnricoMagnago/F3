//@ ltl invariant negative: ((x_2 - x_3 > 8) U ((x_0 - x_1 > -4) || (x_0 - x_3 >= -7)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((12.0 + v1) > (8.0 + v2)? (12.0 + v1) : (8.0 + v2));
_x_v1 = ((14.0 + v0) > (19.0 + v3)? (14.0 + v0) : (19.0 + v3));
_x_v2 = ((18.0 + v1) > (18.0 + v3)? (18.0 + v1) : (18.0 + v3));
_x_v3 = ((7.0 + v0) > (4.0 + v3)? (7.0 + v0) : (4.0 + v3));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}