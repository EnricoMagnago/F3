//@ ltl invariant negative: ((x_3 - x_1 > 16) || ((x_2 - x_3 > 17) R (x_3 - x_1 >= 3)));

int main()
{
  float v0, _x_v0;
  float v1, _x_v1;
  float v2, _x_v2;
  float v3, _x_v3;
  while(1) {
_x_v0 = ((8.0 + v1) > (1.0 + v3)? (8.0 + v1) : (1.0 + v3));
_x_v1 = ((8.0 + v2) > (7.0 + v3)? (8.0 + v2) : (7.0 + v3));
_x_v2 = ((1.0 + v0) > (11.0 + v2)? (1.0 + v0) : (11.0 + v2));
_x_v3 = ((1.0 + v1) > (4.0 + v3)? (1.0 + v1) : (4.0 + v3));
v0 = _x_v0;
v1 = _x_v1;
v2 = _x_v2;
v3 = _x_v3;
  }
  return 0;
}
