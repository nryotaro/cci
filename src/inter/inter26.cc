#include <bits/stdc++.h>
using namespace std;

double solve(string s) {
  int n = s.size();
  for (int i = n - 1; 0 <= i; i--) {
    if (s[i] == '+' || s[i] == '-') {
      auto op_pos = s.begin() + i;
      double left = solve(string(s.begin(), op_pos));
      double right = solve(string(op_pos + 1, s.end()));
      if (s[i] == '+') {
        return left + right;
      } else {
        return left - right;
      }
    }
  }
  for (int i = n - 1; 0 <= i; i--) {
    if (s[i] == '*' || s[i] == '/') {
      auto op_pos = s.begin() + i;
      double left = solve(string(s.begin(), op_pos));
      double right = solve(string(op_pos + 1, s.end()));
      if (s[i] == '*') {
        return left * right;
      } else {
        return left / right;
      }
    }
  }
  int result = 0;
  for (int i = 0; i < n; i++) {
    result *= 10;
    result += s[i] - '0';
  }
  return result;
}

// int main() {
//   string s = "2*3+5/6*3+15";
//   cout << solve(s) << endl;
// }
