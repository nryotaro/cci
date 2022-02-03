#include <bits/stdc++.h>
using namespace std;

int flip(int v) { return 1 ^ v; }
int sign(int v) { return flip(v >> 31) & 1; }

int solve(int a, int b) {
  int sa = sign(a);
  int sb = sign(b);
  int sc = sign(a - b);
  int ss = flip(sa ^ sb);
  int ans_1 = a * (sa ^ ss) + b * (sb ^ ss);
  int ans_2 = a * sc + b * flip(sc);

  return ans_1 * flip(ss) + ans_2 * ss;
}
