#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> args) {
  int n = args.size();
  int result = args[0];
  int sum = 0;
  for (int from = 0, to = 1; to <= n;) {
    if (0 <= sum + args[to - 1]) {
      sum += args[to - 1];
      to++;
      result = max(result, sum);
    } else {
      from = to;
      to = from + 1;
      sum = 0;
    }
  }
  return result;
}
// int main() {
//   vector<int> args = {2, -8, 3, -2, 4, -10};
//   cout << solve(args) << endl;
//   return 0;
// }
