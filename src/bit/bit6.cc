#include <bits/stdc++.h>
using namespace std;


int solve(int a, int b) {
  int res = 0;
  while(a > 0 || b > 0) {
    res += ( a & 1) ^ (b & 1);
    a >>= 1;
    b >>= 1;
  }
  return res;
}
