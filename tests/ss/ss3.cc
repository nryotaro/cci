#include <gtest/gtest.h>
#include "ss/ss3.h"
#include <bits/stdc++.h>
using namespace std;

TEST(ss3, 1) {
  int array[] = {5, 6, 7, 8};
  EXPECT_EQ(-1, solve(array, 4, 1));
}

TEST(ss3, 2) {
  int array[] = {5, 6, 7, 8, 1, 2, 3, 4};
  EXPECT_EQ(5, solve(array, 8, 2));
}

TEST(ss3, 3) {
  int array[] = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(5, solve(array, 6, 6));
}
