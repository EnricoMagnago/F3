//@ ltl invariant negative: ((x_2 - x_0 >= -17) || (X ([] (x_2 - x_3 >= -1))));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((13.0 + v0) > (18.0 + v3)? (13.0 + v0) : (18.0 + v3));
_x_v1 = ((12.0 + v0) > (5.0 + v3)? (12.0 + v0) : (5.0 + v3));
_x_v2 = ((19.0 + v2) > (20.0 + v3)? (19.0 + v2) : (20.0 + v3));
_x_v3 = ((12.0 + v1) > (15.0 + v2)? (12.0 + v1) : (15.0 + v2));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}