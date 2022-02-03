#include "inter/inter7.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(inter7, 1) { EXPECT_EQ(2, solve(2, -1)); }
TEST(inter7, 2) { EXPECT_EQ(1, solve(-2, 1)); }
TEST(inter7, 3) { EXPECT_EQ(4, solve(2, 4)); }
TEST(inter7, 4) { EXPECT_EQ(-2, solve(-2, -4)); }
TEST(inter7, 5) { EXPECT_EQ(-2, solve(-4, -2)); }
