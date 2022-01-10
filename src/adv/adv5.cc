#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(vector<int> &vec) {
  int n = vec.size();
  unordered_map<int, vector<int>> diff_indice;
  diff_indice[0].push_back(-1);
  int one = 0, zero = 0;
  for(int i = 0;i<n;i++) {
    if(vec[i] > 0)
      one++;
    else
      zero++;
    diff_indice[zero-one].push_back(i);
  }
  int res = 0;
  for(auto e: diff_indice) {
    vector<int> &index = e.second;
    if(index.size() >= 2) {
      res = max(index[index.size()-1] - index[0], res);
    }
  }
  return res;
}
