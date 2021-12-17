#include "bit/bit2.h"
#include <gtest/gtest.h>

TEST(bit2, 1) { EXPECT_EQ("0", solve(0)); }

TEST(bit2, 2) { EXPECT_EQ("1", solve(1)); }

TEST(bit2, 3) { EXPECT_EQ("0.1", solve(0.5)); }

TEST(bit2, 4) { EXPECT_EQ("ERROR", solve(0.33)); }

TEST(bit2, 5) { EXPECT_EQ("0.1001", solve(0.5625)); }
