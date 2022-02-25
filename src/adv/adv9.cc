#include <bits/stdc++.h>
using namespace std;

int solve(int k) {
  deque<int> que3, que5, que7;
  que3.push_back(3);
  que5.push_back(5);
  que7.push_back(7);
  int res;
  for (int i = 0; i < k; i++) {
    res = min(que3.front(), min(que5.front(), que7.front()));
    if (res == que3.front()) {
      que3.pop_front();
      que3.push_back(3 * res);
      que5.push_back(5 * res);
    } else if (res == que5.front()) {
      que5.pop_front();
      que5.push_back(5 * res);
      que7.push_back(7 * res);
    } else
      que7.pop_front();
    que7.push_back(7 * res);
  }
  return res;
}
