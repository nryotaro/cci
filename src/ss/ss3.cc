#include "ss3.h"
#include <bits/stdc++.h>
using namespace std;

int solve(int left, int right, int array[], int x) {
  cout << left << " , " << right << endl;
  if (right <= left)
    return -1;
  int mid = (left + right) / 2;
  if (array[mid] == x)
    return mid;  
  if (array[left] < array[right-1]) {

    if (array[mid] < x) {
      cout << "right: " << mid + 1 << " , " << right << endl;
      return solve(mid + 1, right, array, x);      
    }
    else {
      cout << "left: " << left << ", " <<mid << endl;
      return solve(left, mid, array, x);
    }

  }
  // array[left] >= array[right]
  return max(solve(left, mid, array, x), solve(mid+1, right, array, x));
}

int solve(int array[], int length, int x) { return solve(0, length, array, x); }
