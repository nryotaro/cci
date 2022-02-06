#include <bits/stdc++.h>
using namespace std;

void solve(vector<byte> &screen, int width, int x1, int x2, int y) {
  int index = width / 8 * y + x1 / 8;
  screen[index] = (byte)255 >> (x1 % 8);
  int index2 = width / 8 * y + x2 / 8;
  screen[index2] = (byte)255 << (7 - (x2 % 8));
  for (int i = index + 1; i < index2; i++)
    screen[i] = (byte)255;
  return;
}
