#include <gtest/gtest.h>
#include "adv/adv5.h"
#include <bits/stdc++.h>
using namespace std;

TEST(adv5, 1) {
  vector<int> vec = {1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1};
  EXPECT_EQ(14, solve(vec));
}

TEST(adv5, 2) {
  vector<int> vec = {1};
  EXPECT_EQ(0, solve(vec));
}
