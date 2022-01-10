#include <bits/stdc++.h>
using namespace std;

bool solve(list<char> lst) {
  vector<char> vec(lst.begin(), lst.end());
  int n = vec.size();
  for(int i = 0;i<n / 2;i++) {
    if(vec[i] != vec[n-1-i])
      return false;
  }
  return true;
}
