#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> args) {
  int n = args.size();
  vector<vector<int>> dp(n + 1, vector<int>(2, 0));
  for (int i = n - 1; 0 <= i; i--) {
    dp[i][0] = max(dp[i + 1][1], dp[i + 1][0]);
    dp[i][1] = dp[i + 1][0] + args[i];
  }
  return max(dp[0][0], dp[0][1]);
}
// int main() {
//   vector<int> args = {30, 15, 60, 75, 45, 15, 15, 45};
//   cout << solve(args) << endl;
//   return 0;
// }
