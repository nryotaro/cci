#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(vector<int> args) {
  int n = 1 << 30, m = -1;
  int current_max = args[0];
  int len = args.size();

  for (int i = 0; i < len; i++) {
    if (args[i] < current_max) {
      n = min(n, i);
      m = max(m, i);
    } else {
      current_max = args[i];
    }
  }
  if (n == 1 << 30 && m == -1) {
    return {0, 0};
  }
  int min_bound = *min_element(args.begin() + n, args.begin() + m + 1);
  int max_bound = *max_element(args.begin() + n, args.begin() + m + 1);
  for (int i = 0; i < len; i++) {
    if (min_bound < args[i]) {
      n = min(n, i);
    }
    if (args[i] < max_bound) {
      m = max(m, i);
    }
  }
  return {n, m};
}

// int main() {
//   vector<int> args = {1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19};
//   pair<int, int> result = solve(args);
//   cout << result.first << " " << result.second << endl;
//   return 0;
// }
