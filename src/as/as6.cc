#include <bits/stdc++.h>
#include <string>
using namespace std;

string solve(string s) {
  if(s == "")
    return "";
  string res;
  res.push_back(s[0]);
  int count = 1;
  for(int i = 1;i<(int) s.size();i++) {
    if(res.back() == s[i]) {
      count++;
    } else {
      res.append(to_string(count));
      res.push_back(s[i]);
      count = 1;
    }
  }
  res.append(to_string(count));
  if(res.size() < s.size())
    return res;
  else
    return s;
}
