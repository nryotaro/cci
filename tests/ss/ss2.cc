#include <gtest/gtest.h>
#include "ss/ss2.h"
#include<bits/stdc++.h>
using namespace std;

TEST(ss2, 1) {
  int a[] = {15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14};
  EXPECT_EQ(8, solve(a, 12, 5));
}

TEST(ss2, 2) {
  int a[] = {1, 2, 3, 4};
  EXPECT_EQ(2, solve(a, 4, 3));
}

TEST(ss2, 3) {
  int a[] = {1, 2, 3, 4};
  EXPECT_EQ(nullopt, solve(a, 4, 9));
}
