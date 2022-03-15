#include <bits/stdc++.h>
using namespace std;

pair<int, int> rec(string &expression, int from, int to,
                   vector<vector<pair<int, int>>> &dp) {
  // cout << from << " " << to << endl;
  if (dp[from][to].first != -1)
    return dp[from][to];
  if (to <= from)
    return dp[from][to] = {0, 0};
  if (from + 1 == to) {
    if (expression[from] == '0')
      return dp[from][to] = {0, 1};
    else
      return dp[from][to] = {1, 0};
  }
  int true_pattern = 0;
  int false_pattern = 0;
  for (int i = from; i < to - 2; i += 2) {
    // cout << " ~~~ " << from << " i + 1 " << i + 1 << endl;
    pair<int, int> l = rec(expression, from, i + 1, dp);
    pair<int, int> r = rec(expression, i + 2, to, dp);
    if (expression[i + 1] == '&') {
      true_pattern += l.first * r.first;
      false_pattern +=
          (l.first + l.second) * (r.first + r.second) - (l.first * r.first);
    } else if (expression[i + 1] == '|') {
      true_pattern +=
          l.first * (r.first + r.second) + (l.first + l.second) * r.first;
      false_pattern += l.second * r.second;
    } else {
      true_pattern += l.first * r.second + l.second * r.first;
      false_pattern += l.first * r.first + l.second * r.second;
    }
  }
  // cout << from << " " << to << " -> ";
  return dp[from][to] = {true_pattern, false_pattern};
}

int countEval(string expression, bool result) {
  int n = expression.size();
  vector<vector<pair<int, int>>> dp(n + 1,
                                    vector<pair<int, int>>(n + 1, {-1, -1}));
  pair<int, int> count = rec(expression, 0, expression.size(), dp);
  /*
  for(int i = 0;i<n;i++) {
    for(int j =0;j<n;j++) {
      cout << i << ", " << j << " -> "
        << dp[i][j].first << "," << dp[i][j].second << endl;
    }
  }
  */
  if (result)
    return count.first;
  else
    return count.second;
}

// int main() {
//   cout << countEval("1^0|0|1", false) << endl;
//   cout << countEval("0&0&0&1^1|0", true) << endl;
//   return 0;
// }
