#include "rd/rd1.h"
#include <gtest/gtest.h>

TEST(rd1, 1) { EXPECT_EQ(1, solve(1)); }

TEST(rd1, 2) { EXPECT_EQ(2, solve(2)); }

TEST(rd1, 3) { EXPECT_EQ(4, solve(3)); }