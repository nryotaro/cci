#include "as/as6.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>

TEST(as6, 1) {
  EXPECT_EQ("a2b1c5a3", solve("aabcccccaaa"));
}

TEST(as6, 2) {
  EXPECT_EQ("doge", solve("doge"));
}
