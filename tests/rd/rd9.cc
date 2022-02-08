#include "rd/rd9.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;
TEST(rd9, 1) {
  vector<string> ans = {"((()))", "(()())", "(())()", "()(())", "()()()"};
  EXPECT_EQ(ans, solve(3));

  // EXPECT_EQ
}
