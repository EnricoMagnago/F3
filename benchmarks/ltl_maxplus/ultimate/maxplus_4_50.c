//@ ltl invariant negative: ((x_3 - x_2 >= -7) || ((x_2 - x_0 >= 15) && (x_3 - x_0 >= -9)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((17.0 + v2) > (2.0 + v3)? (17.0 + v2) : (2.0 + v3));
_x_v1 = ((14.0 + v2) > (1.0 + v3)? (14.0 + v2) : (1.0 + v3));
_x_v2 = ((19.0 + v0) > (4.0 + v2)? (19.0 + v0) : (4.0 + v2));
_x_v3 = ((20.0 + v1) > (10.0 + v2)? (20.0 + v1) : (10.0 + v2));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}
