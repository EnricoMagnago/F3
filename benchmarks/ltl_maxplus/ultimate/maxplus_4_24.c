//@ ltl invariant negative: ((x_3 - x_2 >= -12) || ((x_0 - x_3 > -10) && (x_2 - x_3 > 14)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((7.0 + v1) > (15.0 + v2)? (7.0 + v1) : (15.0 + v2));
_x_v1 = ((19.0 + v0) > (16.0 + v2)? (19.0 + v0) : (16.0 + v2));
_x_v2 = ((18.0 + v0) > (11.0 + v3)? (18.0 + v0) : (11.0 + v3));
_x_v3 = ((14.0 + v0) > (7.0 + v3)? (14.0 + v0) : (7.0 + v3));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}