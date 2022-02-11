#include "inter/inter9.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(inter9, 1) {
  EXPECT_EQ(4, mul(4, 1));
  EXPECT_EQ(8, mul(4, 2));
  EXPECT_EQ(0, mul(4, 0));
  EXPECT_EQ(4, mul(-4, -1));
  EXPECT_EQ(2, sub(4, 2));
  EXPECT_EQ(1, sub(3, 2));
  EXPECT_EQ(0, my_div(4, 2));

  EXPECT_EQ(1, my_div(5, 2));
  EXPECT_EQ(5, my_div(5, 56));
}

// TEST(inter9, 2) {  }
