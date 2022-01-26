#include <bits/stdc++.h>
using namespace std;

vector<string> solve(string s) {
  if (s == "")
    return {""};
  vector<string> subset = solve(string(s.begin() + 1, s.end()));
  vector<string> res;
  for (string sub : subset) {
    int n = sub.size();
    for (int i = 0; i < n; i++) {
      string temp;
      for (int j = 0; j < n; j++) {
        if (i == j) {
          temp.push_back(s[0]);
        }
        temp.push_back(sub[j]);
      }
      res.push_back(temp);
    }
    res.push_back(sub + s[0]);
  }
  return res;
}
