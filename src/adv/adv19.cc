#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(int *array, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++)
    sum += array[i];
  int diff = (length + 2) * (length + 3) / 2 - sum;
  int diff_half = diff / 2;
  // [(1, diff-1), (2, diff - 2), .. (diff/2, diff/2)]
  int sub_sum = 0;
  for (int i = 0; i < length; i++) {
    if (array[i] <= diff_half)
      sub_sum += array[i];
  }
  int item1 = diff_half * (diff_half + 1) / 2 - sub_sum;
  return {item1, diff - item1};
}

// int main() {
//   // 3, 8
//   int array[] = {1, 2, 4, 5, 7, 8};
//   pair<int,int> result = solve(array, 6);
//   cout << result.first << " " << result.second << endl;
//   return 0;
// }
