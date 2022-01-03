#include "rd4.h"
#include <bits/stdc++.h>
using namespace std;

vector<unordered_multiset<int>> solve(vector<int> v) {
  int size = v.size();
  vector<unordered_multiset<int>> res;
  for(int i = 0;i<(1<< size);i++) {
    unordered_multiset<int> item;
    for(int j=0;j<size;j++) {
      if(i & (1 << j))
	item.insert(v[j]);
    }
    res.push_back(item);
  }
  return res;
}
