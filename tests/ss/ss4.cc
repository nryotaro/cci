#include <gtest/gtest.h>
#include <bits/stdc++.h>
#include "ss/ss4.h"
using namespace std;

TEST(ss4, 1) {
  vector<int> array = {0, 1, 2, 3};
  MyArray ary(array);
  EXPECT_EQ(2, solve(ary, 2));
}

TEST(ss4, 2) {
  vector<int> array = {0, 1, 3, 3, 4};
  MyArray ary(array);

  EXPECT_EQ(-1, solve(ary, 2));
}
