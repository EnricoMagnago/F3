//@ ltl invariant negative: (<> ((<> (x_2 - x_1 > 8)) U (x_0 - x_2 >= 4)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((9.0 + v2) > (16.0 + v3)? (9.0 + v2) : (16.0 + v3));
_x_v1 = ((12.0 + v0) > (5.0 + v2)? (12.0 + v0) : (5.0 + v2));
_x_v2 = ((18.0 + v0) > (13.0 + v2)? (18.0 + v0) : (13.0 + v2));
_x_v3 = ((6.0 + v1) > (2.0 + v3)? (6.0 + v1) : (2.0 + v3));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}
