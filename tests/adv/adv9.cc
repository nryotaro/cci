#include "adv/adv9.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(adv9, 1) {
  EXPECT_EQ(3, solve(1));
  EXPECT_EQ(5, solve(2));
  EXPECT_EQ(7, solve(3));
  EXPECT_EQ(9, solve(4));
  EXPECT_EQ(15, solve(5));
  EXPECT_EQ(21, solve(6));
}
