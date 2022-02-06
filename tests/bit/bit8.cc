#include "bit/bit8.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(bit8, 1) {
  vector<byte> screen(4);
  solve(screen, 16, 6, 13, 1);
  EXPECT_EQ(0, (int)screen[0]);
  EXPECT_EQ(0, (int)screen[1]);
  EXPECT_EQ(3, (int)screen[2]);
  EXPECT_EQ(252, (int)screen[3]);
}
TEST(bit8, 2) {
  vector<byte> screen(4);
  solve(screen, 16, 8, 9, 1);
  EXPECT_EQ(0, (int)screen[0]);
  EXPECT_EQ(0, (int)screen[1]);
  EXPECT_EQ(0, (int)screen[2]);
  EXPECT_EQ(192, (int)screen[3]);
}
