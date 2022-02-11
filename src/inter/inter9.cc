#include <bits/stdc++.h>
using namespace std;

int mul(int a, int b) {
  bool pos;
  if (a < 0) {
    if (0 < b) {
      pos = false;
    } else { // b <= 0
      pos = true;
      b = -b;
    }

    a = -a;
  } else { // 0 <= a
    if (0 < b)
      pos = true;
    else {
      pos = false;
      b = -b;
    }
  }
  int res = 0;
  while (b) {
    if (b & 1) {
      res += a;
    }
    b >>= 1;
    a <<= 1;
  }
  if (pos)
    return res;
  else
    return -res;
}

int sub(int a, int b) {

  long long b_minus = ~b + 1;
  return a + b_minus;
}

//
int my_div(int a, int b) {
  // do
  // b <<= 1
  // unitl (b < a)
  // b >>= 1
  //
  int temp = b;
  while (true) {
    if ((temp << 1) <= a) {
      temp <<= 1;
    } else
      break;
  }
  while (true) {
    if (temp <= a) {
      a = sub(a, temp);
    }
    if (temp == b) {
      break;
    }
    temp >>= 1;
  }
  return a;
}
