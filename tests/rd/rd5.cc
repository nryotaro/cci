#include "rd/rd5.h"
#include <gtest/gtest.h>

TEST(rd5, 1) {
  int a = 1, b = 21;
  EXPECT_EQ(a * b, solve(a, b));
}

TEST(rd5, 2) {
  int a = 3, b = 10;
  EXPECT_EQ(a * b, solve(a, b));
}
