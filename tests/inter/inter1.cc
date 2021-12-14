#include "inter/inter1.h"
#include <gtest/gtest.h>

TEST(inter1, 1) {
    int a = 21, b = 42;
    solve(a, b);
    EXPECT_EQ(42, a);
    EXPECT_EQ(21, b);
}