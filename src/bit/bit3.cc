#include <bits/stdc++.h>
using namespace std;

int count_bit(int v) {
  int res = 0, current = 0;
  for (int i = 0; i < 32; i++) {
    if ((1 << i) & v) {
      current++;
      res = max(res, current);
    } else {
      current = 0;
    }
  }
  return res;
}

int solve(int n) {
  int res = 0;
  for (int i = 0; i < 32; i++) {
    res = max(res, count_bit(n | (1 << i)));
  }
  return res;
}
