#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
  int res = 0;
  for(int i=1;i<=n;i++) {
    int temp = i;
    while(temp % 5 == 0) {
      res++;
      temp /= 5;
    }
  }
  return res;
}
