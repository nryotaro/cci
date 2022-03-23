#include <bits/stdc++.h>
using namespace std;
bool can_build(string word, unordered_map<string, bool> &cache) {
  if (cache.find(word) != cache.end()) {
    return cache[word];
  }
  int n = word.size();
  for (int i = 0; i < n - 1; i++) {
    string first_half = string(word.begin(), word.begin() + i + 1);
    string second_half = string(word.begin() + i + 1, word.end());
    // cout << word << " -> " << first_half << ", " << second_half << endl;
    if (can_build(first_half, cache) && can_build(second_half, cache)) {
      cout << "OK " << endl;
      return cache[word] = true;
    }
  }
  return cache[word] = false;
}

string solve(vector<string> words) {
  sort(words.begin(), words.end(),
       [](const string &w1, const string &w2) -> int {
         return w1.size() < w2.size();
       });
  unordered_map<string, bool> cache;
  string result;
  for (string word : words) {
    if (can_build(word, cache)) {
      result = word;
    }
    cache[word] = true;
  }
  return result;
}
// int main() {
//   vector<string> words = {
//     "cat", "banana", "dog", "nana", "walk", "walker", "dogwalker"
//   };
//   cout << solve(words) << "@" << endl;
//   return 0;
// }
