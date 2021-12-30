#include <bits/stdc++.h>
using namespace std;

optional<int> solve(int left, int right, int a[], int v) {
  if (right <= left)
    return nullopt;
  if (left + 1 == right) {
    if (a[left] == v)
      return left;
    return nullopt;
  }
  // left < right
  if (a[left] < a[right - 1]) {
    int lb = left - 1, ub = right;
    while (ub - lb > 1) {
      int mid = (ub + lb) / 2;
      if (v <= a[mid])
        ub = mid;
      else
        lb = mid;
    }
    if (ub == right || a[ub] != v)
      return nullopt;
    else
      return ub;
  }
  optional<int> res = solve(left, (right + left) / 2, a, v);
  if (res == nullopt)
    return solve((left + right) / 2, right, a, v);
  return res;
}

optional<int> solve(int a[], int length, int v) {
  return solve(0, length, a, v);
}
