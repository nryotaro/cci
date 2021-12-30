#include "rd3.h"
#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int left, int right) {
  if (right <= left)
    return -1;

  int mid = (left + right) / 2;
  if (a[mid] == mid)
    return mid;
  else if (mid < a[mid])
    return solve(a, left, mid);
  else
    return solve(a, mid + 1, right);
}

int solve(int a[], int length) { return solve(a, 0, length); }

int solve2(int a[], int left, int right) {
  if(right <= left)
    return -1;
  int mid = (left + right) / 2;
  if(a[mid] == mid)
    return mid;

  return max(solve2(a, left, mid), solve2(a, mid+1, right));
}

int solve2(int a[], int length) { return solve2(a, 0, length); }
