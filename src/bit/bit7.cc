#include <bits/stdc++.h>
int solve(int n) {
  int x = (n << 1) & 0xaaaaaaaa;
  int y = (n >> 1) & 0x55555555;
  return x | y;
}
