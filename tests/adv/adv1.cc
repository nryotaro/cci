#include "adv/adv1.h"
#include <gtest/gtest.h>

TEST(adv1, 1) { EXPECT_EQ(2, solve(1, 1)); }
TEST(adv1, 2) { EXPECT_EQ(11, solve(10, 1)); }
TEST(adv1, 3) { EXPECT_EQ(1200, solve(1200, 0)); }
TEST(adv1, 4) { EXPECT_EQ(0, solve(-1, 1)); }
TEST(adv1, 5) { EXPECT_EQ(-4, solve(-1, -3)); }