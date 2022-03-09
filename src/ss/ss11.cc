#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> array) {
  sort(array.begin(), array.end());
  int n = array.size();
  vector<int> res(n, -1);
  // array 1 2 3 4 5
  // n / 2 = 2
  for (int i = 0; i < n / 2; i++) {
    res[i * 2] = array[n - 1 - i];
    res[i * 2 + 1] = array[i];
  }
  if (n % 2 == 1) {
    res[n - 1] = array[n / 2];
  }
  return res;
}
// int main() {
//   vector<int> res = solve({5, 3,4, 2, 1});
//   for(auto e: res)
//     cout << e <<" ";
//   cout << endl;
//   res = solve({5, 3,4, 2});
//   for(auto e: res)
//     cout << e <<" ";
//   cout << endl;

//   return 0;
// }
