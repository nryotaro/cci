#include <bits/stdc++.h>
using namespace std;

bool rec(string word, string goal, unordered_set<string> &dic,
         unordered_set<string> &used, vector<string> &path) {
  if (word == goal) {
    path.push_back(goal);
    used.insert(goal);
    return true;
  }
  if (dic.find(word) == dic.end())
    return false;
  if (used.find(word) != used.end()) {
    return false;
  }
  used.insert(word);
  path.push_back(word);
  for (int i = 0; i < word.size(); i++) {
    for (int j = 0; j < 26; j++) {
      string next_word(word);
      next_word[i] = 'A' + j;
      if (rec(next_word, goal, dic, used, path)) {
        return true;
      }
    }
  }
  used.erase(word);
  path.pop_back();
  return false;
}

vector<string> solve(string start, string goal, unordered_set<string> &dic) {
  unordered_set<string> used;
  vector<string> path;
  rec(start, goal, dic, used, path);
  return path;
}

// int main() {
//   unordered_set<string> dic = {"DAMP", "LIKE", "LAMP", "LIMP", "LIME"};
//   vector<string> steps = solve("DAMP", "LIKE", dic);
//   for (string word : steps)
//     cout << word << endl;
//   return 0;
// }
