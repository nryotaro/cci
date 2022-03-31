#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> solve(vector<int> array, int target) {
  sort(array.begin(), array.end());
  vector<pair<int, int>> result;
  for (int head = 0, tail = array.size() - 1; head < tail; head++) {
    int i = tail;
    for (; head < i && target <= array[head] + array[i]; i--) {
      if (target == array[head] + array[i]) {
        result.push_back({array[head], array[i]});
      }
    }
    if (head < tail - 1) {
      if (array[head] < array[head + 1]) {
        tail = i + 1;
      }
    }
  }
  return result;
}

// int main() {
//   vector<int> array = {1, 3 , 2, 4 ,2, 5, 6, 7};
//   vector<pair<int, int>> result = solve(array, 6);
//   for(pair<int, int> e: result) {
//     cout << e.first << " " << e.second << endl;
//   }
//   return 0;
// }
