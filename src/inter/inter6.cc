#include <bits/stdc++.h>
#include <limits>
using namespace std;

int solve(vector<int> &a, vector<int> &b) {
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int k = 0, res = numeric_limits<int>::max();
  for (int i = 0; i < (int)a.size(); i++) {
    while (true) {
      if (k == (int)b.size() - 1) {
        break;
      }
      if(a[i] < b[k]) {
	break;
      } else { // b[k] <= a[i]
	if(b[k+1] <= a[i]){
	  k++;
	} else {
	  break;
	}
      }
    }
    res = min(res, abs(a[i] - b[k]));
    if (k < (int)b.size() - 1) {
      res = min(res, abs(a[i] - b[k + 1]));
    }
  }
  return res;
}
