#include "ss5.h"
#include <bits/stdc++.h>
using namespace std;

int solve(string ary[], int length, string s) {
  int lb = -1, ub = length;
  while (ub - lb > 1) {
    int mid = (ub + lb) / 2;
    int peek = mid;
    while (true) {
      if (ary[peek] == "") {
        peek--;
        if (peek == lb)
          break;
      } else
        break;
    }
    if (peek == lb)
      lb = mid;
    else if (ary[peek] < s) {
      lb = peek;
    } else
      ub = peek;
  }
  if (ub == length)
    return -1;
  else
    return ub;
}
