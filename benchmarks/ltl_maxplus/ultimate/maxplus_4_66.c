//@ ltl invariant negative: ((x_1 - x_0 >= -19) || ((x_3 - x_0 >= 13) && (x_2 - x_1 >= -17)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((11.0 + v0) > (15.0 + v1)? (11.0 + v0) : (15.0 + v1));
_x_v1 = ((18.0 + v0) > (18.0 + v3)? (18.0 + v0) : (18.0 + v3));
_x_v2 = ((19.0 + v0) > (3.0 + v1)? (19.0 + v0) : (3.0 + v1));
_x_v3 = ((4.0 + v0) > (20.0 + v2)? (4.0 + v0) : (20.0 + v2));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}