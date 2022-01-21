#include <gtest/gtest.h>
#include "bit/bit7.h"

TEST(bit7, 1) {
  EXPECT_EQ(0b01010101, solve(0b10101010));

}
