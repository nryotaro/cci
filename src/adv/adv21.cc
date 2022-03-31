#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> array) {
  int n = static_cast<int>(array.size());
  vector<int> left(n, 0), right(n, 0);
  for (int i = 0, max_height = 0; i < n; i++) {
    left[i] = max_height;
    max_height = max(array[i], max_height);
  }
  for (int i = n - 1, max_height = 0; 0 <= i; i--) {
    right[i] = max_height;
    max_height = max(array[i], max_height);
  }
  int result = 0;
  for (int i = 0; i < n; i++) {
    int height = min(left[i], right[i]);
    result += max(height - array[i], 0);
  }
  return result;
}

// int main() {
//   vector<int> array = {
//     0, 0, 4, 0, 0, 6, 0, 0, 3, 0, 5, 0, 1, 0, 0, 0
//   };
//   cout << solve(array) << endl;
//   return 0;
// }
