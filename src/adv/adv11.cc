#include <bits/stdc++.h>
using namespace std;

int solve(vector<string> words, string word1, string word2) {
  unordered_map<string, set<int>> positions;
  int n = words.size();
  for (int i = 0; i < n; i++) {
    positions[words[i]].insert(i);
  }
  int res = numeric_limits<int>::max();

  for (int pos1 : positions[word1]) {
    set<int> position2 = positions[word2];
    auto iter = lower_bound(position2.begin(), position2.end(), pos1);
    if (iter != position2.end()) {
      res = min(res, *iter - pos1);
    }
    if (iter != position2.begin()) {
      res = min(res, pos1 - *prev(iter, 1));
    }
  }
  return res;
}

// int main() {
//   vector<string> words = {"apple", "pen", "apple", "banana"};
//   cout << solve(words, "apple", "banana") << endl;
//   cout << solve(words, "apple", "apple") << endl;
//   return 0;
// }
