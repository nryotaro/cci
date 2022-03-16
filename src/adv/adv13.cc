#include <bits/stdc++.h>
using namespace std;

pair<vector<string>, int>
rec(string s, unordered_set<string> &dic,
    unordered_map<string, pair<vector<string>, int>> &cache) {
  if (cache.find(s) != cache.end()) {
    return cache[s];
  }
  int n = s.size();
  if (n == 1) {
    if (dic.find(s) == dic.end()) {
      return cache[s] = {{s}, 1};
    }
  }
  int count;
  vector<string> words;
  if (dic.find(s) == dic.end()) {
    count = s.size();
  } else {
    count = 0;
  }
  words = {s};

  for (int i = 0; i < n - 1; i++) {
    string head = string(s.begin(), next(s.begin(), i + 1));
    pair<vector<string>, int> res_head = rec(head, dic, cache);

    string tail = string(next(s.begin(), i + 1), s.end());
    pair<vector<string>, int> res_tail = rec(tail, dic, cache);

    int candidate = res_head.second + res_tail.second;
    if (candidate < count) {
      count = candidate;
      words = res_head.first;
      for (auto word : res_tail.first)
        words.push_back(word);
    }
  }
  return cache[s] = {words, count};
}

vector<string> solve(string s, vector<string> dic) {
  unordered_set<string> words(dic.begin(), dic.end());
  unordered_map<string, pair<vector<string>, int>> cache;
  pair<vector<string>, int> res = rec(s, words, cache);
  return res.first;
}

// int main() {
//   string s = "jesslookedjustliketimherbrother";
//   vector<string> dic = {"looked", "just", "like", "her", "brother"};

//   vector<string> res = solve(s, dic);
//   for(string word: res)
//     cout << word << endl;

//   return 0;
// }
