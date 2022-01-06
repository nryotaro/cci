#include <bits/stdc++.h>
using namespace std;

bool solve(string &a, string &b) {
  if (abs((int)a.size() - (int)b.size()) > 1)
    return false;
  if (a.size() == b.size()) {
    int c = 0;
    for (int i = 0; i < (int)a.size(); i++) {
      if (a[i] != b[i])
        c++;
      if (c > 1)
        return false;
    }
    return true;
  }
  if (a.size() > b.size())
    swap(a, b);
  int gap = 0;
  for (int i = 0; i < (int)a.size(); i++) {
    if (a[i] != b[i + gap]) {
      if (gap == 0) {
        gap++;
        if (a[i] != b[i + gap])
          return false;
      } else
        return false;
    }
  }
  return true;
}
