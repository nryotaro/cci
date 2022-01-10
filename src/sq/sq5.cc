#include "sq5.h"
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &stk) {
  if (stk.empty())
    return;
  stack<int> temp_stk;
  int mini = stk.top(), count = 1;
  stk.pop();
  temp_stk.push(mini);
  while (!stk.empty()) {
    int value = stk.top();
    if (value < mini) {
      mini = value;
      count = 1;
    } else if (value == mini)
      count++;
    temp_stk.push(value);
    stk.pop();
  }
  while (!temp_stk.empty()) {
    int value = temp_stk.top();
    temp_stk.pop();
    if (mini < value) {
      stk.push(value);
    }
  }
  for (int i = 0; i < count; i++)
    stk.push(mini);
}

void solve2(stack<int> &s) {
  if (s.empty())
    return;
  stack<int> r;
  while (true) {
    int maxi = s.top(), count = 1;
    s.pop();
    while (!s.empty()) {
      int v = s.top();
      s.pop();
      if (maxi < v) {
        for (int i = 0; i < count; i++)
          r.push(maxi);
        maxi = v;
        count = 1;
      } else if (maxi == v)
        count++;
      else
        r.push(v);
    }
    for (int i = 0; i < count; i++)
      r.push(maxi);
    bool ok = true;
    int v = r.top();
    while (!r.empty()) {
      if (v < r.top())
        ok = false;
      v = r.top();
      s.push(r.top());
      r.pop();
    }
    if (ok)
      break;
  }
}
