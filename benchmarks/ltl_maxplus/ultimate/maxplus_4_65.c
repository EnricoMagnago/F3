//@ ltl invariant negative: ([] ((x_2 - x_0 > -18) || ([] (x_2 - x_0 >= -1))));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((12.0 + v1) > (20.0 + v3)? (12.0 + v1) : (20.0 + v3));
_x_v1 = ((19.0 + v0) > (1.0 + v2)? (19.0 + v0) : (1.0 + v2));
_x_v2 = ((14.0 + v0) > (13.0 + v1)? (14.0 + v0) : (13.0 + v1));
_x_v3 = ((12.0 + v0) > (20.0 + v2)? (12.0 + v0) : (20.0 + v2));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}