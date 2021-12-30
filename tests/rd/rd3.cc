#include <bits/stdc++.h>
#include "rd/rd3.h"
#include <gtest/gtest.h>
using namespace std;


TEST(rd3, 1) {
  int a[] =  {-1, 0, 1, 3, 5};
  EXPECT_EQ(3, solve(a, 5));
}

TEST(rd3, 2) {
  int a[] =  {1, 1, 1, 4, 5};
  EXPECT_EQ(1, solve2(a, 5));
}
