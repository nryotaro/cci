#include <bits/stdc++.h>
using namespace std;

bool is_substring(string s, string s2);

bool solve(string s1, string s2) {
  int len = s1.size();
  if (len == (int)s2.size() && len > 0) {
    string s1s1 = s1 + s1;
    return is_substring(s1s1, s2);
  }
  return false;
}
