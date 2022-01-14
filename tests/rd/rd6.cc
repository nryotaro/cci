#include <gtest/gtest.h>
#include "rd/rd6.h"

TEST(rd6, 1) {
  int n = 4;
  Tower origin(n), buffer, destination;
  solve(4, origin, destination, buffer);

  EXPECT_EQ(true, origin.empty());
  EXPECT_EQ(true, buffer.empty());
  EXPECT_EQ(0, destination.pop());
  EXPECT_EQ(1, destination.pop());
  EXPECT_EQ(2, destination.pop());
  EXPECT_EQ(3, destination.pop());
  EXPECT_EQ(true, destination.empty());
}
