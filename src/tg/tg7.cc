#include <bits/stdc++.h>
using namespace std;

pair<bool, vector<char>> solve(vector<char> projects, vector<pair<char, char>> deps) {
  unordered_map<char, vector<char>> g;
  unordered_map<char, int> indeg;
  for(auto p: projects) {
    indeg[p] = 0;
  }
  for(pair<char, char> &d: deps) {
    g[d.first].push_back(d.second);
    indeg[d.second]++;
  }
  queue<char> que;
  for(pair<char, int> e: indeg) {
    if(e.second == 0) {
      que.push(e.first);
    }
  }
  vector<char> res;
  while(!que.empty()) {
    char node = que.front();
    //cout << node << endl;
    que.pop();
    res.push_back(node);
    for(char c: g[node]) {
      indeg[c]--;
      if(indeg[c] == 0)
	que.push(c);
    }
  }
  for(auto e: indeg) {
    //cout << e.first << " -> " << e.second << endl;
    if(e.second > 0)
      return {false, {}};
  }
  return {true, res};
}
