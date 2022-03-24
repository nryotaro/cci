#include <bits/stdc++.h>
using namespace std;
bool solve(string s, string pattern) {
  int num_a = 0, num_b = 0;
  for (auto c : pattern) {
    if (c == 'a')
      num_a++;
    else
      num_b++;
  }
  for (int len_a = 0;; len_a++) {
    int total_b = (s.size() - num_a * len_a);
    if (total_b < 0)
      break;
    if (total_b == 0 && num_b == 0 || total_b % num_b == 0) {
      int len_b = 0;
      if (num_b > 0) {
        len_b = total_b / num_b;
      }
      unordered_set<string> a_set, b_set;
      auto iter = s.begin();
      for (char p : pattern) {
        if (p == 'a') {
          a_set.insert(string(iter, next(iter, len_a)));
          iter = next(iter, len_a);
        } else {
          b_set.insert(string(iter, next(iter, len_b)));
          iter = next(iter, len_b);
        }
      }
      if (a_set.size() <= 1 && b_set.size() <= 1)
        return true;
    }
  }
  return false;
}
// int main() {
//   string s = "catcatgocatgo";
//   string pattern = "aabab";
//   cout << solve(s, pattern) << endl;
//   return 0;
// }
