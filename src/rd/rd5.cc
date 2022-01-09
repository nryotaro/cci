#include "rd5.h"

#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
  int res = 0;
  while(b) {
    if(b & 1) {
      res += a;
    }
    a <<= 1;
    b >>= 1;
  }
  return res;
}
