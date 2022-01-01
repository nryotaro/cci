#include <bits/stdc++.h>
#include <cctype>
using namespace std;

bool solve(string s) {
  string norm_s;
  for(int i = 0;i<(int) s.size();i++){
    if(s[i] != ' ') {
      norm_s.push_back(tolower(s[i]));
    }
  }
  unordered_map<char, int> mp;
  for(auto c: norm_s) {
    mp[c]++;
  }
  int odd = 0, even = 0;
  for(auto e: mp) {
    if(e.second % 2)
      odd++;
    else
      even++;
  }
  if(norm_s.size() % 2) { // odd
    return odd == 1;
  } else {
    return odd == 0;
  }
}
