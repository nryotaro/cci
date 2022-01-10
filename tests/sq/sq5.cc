#include "sq/sq5.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(sq5, 1) {
  stack<int> stk;
  stk.push(2);
  stk.push(4);
  stk.push(5);
  stk.push(2);
  stk.push(3);
  solve(stk);

  EXPECT_EQ(2, stk.top());
  stk.pop();
  EXPECT_EQ(2, stk.top());
  stk.pop();
  EXPECT_EQ(3, stk.top());
  stk.pop();
  EXPECT_EQ(5, stk.top());
  stk.pop();
  EXPECT_EQ(4, stk.top());
  stk.pop();
  EXPECT_EQ(true, stk.empty());
}
