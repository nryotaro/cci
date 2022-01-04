#include <bits/stdc++.h>
using namespace std;
#define _debug(x) std::cout << #x << ": " << x << std::endl;

int solve(vector<vector<int>> &vec) {
  int n = vec.size();
  unordered_set<int> indices;
  for (int i = 0; i < n; i++)
    indices.insert(i);
  int w = 0;
  while ((n + 1) >> w)
    w++;
  //cout << "w " << w << endl;
  int res = 0;
  for (int i = 0; i < w; i++) {
    vector<int> zero_indices, one_indices;
    for (auto index : indices) {
      if (vec[index][w - 1 - i])
        one_indices.push_back(index);
      else
        zero_indices.push_back(index);
    }
    vector<int> delete_indices;
    //cout << "zero_indices: " << zero_indices.size() << endl;
    //cout << "one_indices: " << one_indices.size() << endl;
    if (zero_indices.size() <= one_indices.size()) {
      //cout << i << " zero" << endl;
      delete_indices = one_indices;
    } else {
      res |= 1 << i;
      //cout << i << " one" << endl;
      delete_indices = zero_indices;
    }
    for (auto e : delete_indices)
      indices.erase(e);
  }
  return res;
}
