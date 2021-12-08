#include "bit/bit1.h"
#include <gtest/gtest.h>

TEST(bit1, 1) { 
    EXPECT_EQ(1100, solve(1024, 19, 2, 6)); 
}