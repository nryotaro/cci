#include <bits/stdc++.h>
using namespace std;

list<int> solve(list<int> &a, list<int> &b) {
  vector<int> sum;
  list<int>::iterator a_i = a.begin(), b_i = b.begin();

  int carry = 0;

  while (a_i != a.end() || b_i != b.end()) {
    int a_v = 0, b_v = 0;
    if (a_i != a.end()) {
      a_v = *a_i;
      a_i++;
    }
    if (b_i != b.end()) {
      b_v = *b_i;
      b_i++;
    }
    sum.push_back((a_v + b_v + carry) % 10);
    carry = (a_v + b_v + carry) / 10;
  }
  if (carry > 0) {
    sum.push_back(carry);
  }
  return list<int>(sum.begin(), sum.end());
}

list<int> solve2(list<int> &a, list<int> &b) {
  stack<int> a_stk, b_stk;
  for (auto e : a)
    a_stk.push(e);
  for (auto e : b)
    b_stk.push(e);

  int carry = 0;
  vector<int> sum;
  while (!a_stk.empty() || !b_stk.empty()) {
    int a_v = 0, b_v = 0;
    if (!a_stk.empty()) {
      a_v = a_stk.top();
      a_stk.pop();
    }
    if (!b_stk.empty()) {
      b_v = b_stk.top();
      b_stk.pop();
    }
    sum.push_back((a_v + b_v + carry) % 10);
    carry = (a_v + b_v + carry) / 10;
  }
  if (carry)
    sum.push_back(carry);
  reverse(sum.begin(), sum.end());
  return list<int>(sum.begin(), sum.end());
}
