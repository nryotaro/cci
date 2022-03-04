#include <bits/stdc++.h>
using namespace std;

int solve(int array[], int n) {
  int candidate;
  for (int i = 0; i < n;) {
    candidate = array[i];
    int num_candidate = 1;
    int num_other = 0;
    int j = i + 1;
    for (; j < n; j++) {
      if (candidate == array[j])
        num_candidate++;
      else
        num_other++;
      if (num_candidate <= num_other)
        break;
    }
    i = j + 1;
  }
  int count = 0;
  for (int i = 0; i < n; i++)
    if (array[i] == candidate)
      count++;

  if (n / 2 < count)
    return candidate;
  else
    return -1;
}
// int main() {
//   int array[] = {1, 2, 5, 9, 5, 9, 5, 5, 5};
//   cout << solve(array, 9) << endl;
//   int b[] = {1, 2, 3};
//   cout << solve(b, 3) << endl;
//   return 0;
// }
