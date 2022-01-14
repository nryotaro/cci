#include "rd6.h"
#include <bits/stdc++.h>
using namespace std;

Tower::Tower() {}
Tower::Tower(int size) {
  for (int i = size - 1; i >= 0; i--) {
    stk.push(i);
  }
}
bool Tower::empty() { return stk.empty(); }

int Tower::pop() {
  int res = stk.top();
  stk.pop();
  return res;
}

void Tower::add(int i) {
  if (stk.empty() || i < stk.top())
    stk.push(i);
  else {
    string s = to_string(i) + " is larger than " + to_string(stk.top());
    throw runtime_error(s);
  }
}

void solve(int n, Tower &origin, Tower &destination, Tower &buffer) {
  if(n == 0)
    return;
  solve(n-1, origin, buffer, destination);

  int i = origin.pop();
  destination.add(i);
  solve(n-1, buffer, destination, origin);
}

