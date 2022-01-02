#include <bits/stdc++.h>
using namespace std;

int solve_next_v(int v) {
  int left = 0, right = 0, i = 0;

  for (; ((1 << i) & v) == 0; i++) {
  }
  right = i;
  for (; ((1 << i) & v) > 0; i++) {
  }
  left = i-1;
  int next_v = v;
  next_v |= 1 << (left + 1);
  for (int i = 0; i <= left; i++) {
    next_v &= ~(1 << i);
  }
  
  for (int i = 0; i < left - right; i++) {
    next_v |= 1 << i;
  }
  //cout << left << " " << right << endl;
  //cout << "next " << next_v << endl;
  return next_v;
}

int solve_prev_v(int v) {
  bool is_serial_one = true;
  for (int x = v; x > 0; x >>= 1) {
    if ((x & 1) == 0) {
      is_serial_one = false;
    }
  }
  cout << " dogee " << is_serial_one << endl;
  if (is_serial_one) {
    int count = 0;
    for (int x = v; x > 0; x >>= 1) {
      if (x & 1)
        count++;
    }
    int res = 0;
    for (int i = 0; i < count; i++) {
      res |= 1 << (31 - i);
    }
    return res;
  }

  int x = v;
  int count_ones = 0;
  for (; x & 1; x >>= 1) {
    count_ones++;
  }
  int count_zeros = 0;
  for (; (x & 1) == 0; x >>= 1) {
    count_zeros++;
  }

  
  int res = v;
  res &= ~(1 << (count_ones + count_zeros));
  for (int i = 0; i < (count_ones + count_zeros); i++) {
    res &= ~(1 << i);
  }
  for(int i=0;i<=count_ones;i++) {
    res |= 1 << (count_ones + count_zeros - 1 - i);
  }

  return res;
}

pair<int, int> solve(int v) {
  return {solve_next_v(v), solve_prev_v(v)};
}
