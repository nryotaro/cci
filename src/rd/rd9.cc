#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void rec(int left, int right, string &current, vector<string> &res) {
  if (left == 0) {
    if (right == 0) {
      res.push_back(string(current));
      return;
    } else {
      current.push_back(')');
      rec(left, right - 1, current, res);
      current.pop_back();
      return;
    }
  } else { // 0 < left
    current.push_back('(');
    rec(left - 1, right, current, res);
    current.pop_back();
    if (left < right) {
      current.push_back(')');
      rec(left, right - 1, current, res);
      current.pop_back();
    }
  }
}

std::vector<std::string> solve(int n) {
  vector<string> res;
  string current;
  rec(n, n, current, res);
  return res;
}
