#include <bits/stdc++.h>
using namespace std;
vector<bool> solve(string b, string *t, int n) {
  unordered_set<string> substrings;
  for (int len = 1; len <= b.size(); len++) {
    for (int i = 0; i + len <= b.size(); i++) {
      substrings.insert(string(b.begin() + i, b.begin() + i + len));
    }
  }
  vector<bool> result(n);
  for (int i = 0; i < n; i++) {
    result[i] = substrings.find(t[i]) != substrings.end();
  }
  return result;
}
// int main() {
//   string b = "applebananalemon";
//   string t[] = {"apple", "1", "lemon"};
//   vector<bool> results = solve(b, t, 3);
//   for(bool e: results)
//     cout << e << endl;
//   return 0;
// }
