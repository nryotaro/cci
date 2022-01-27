#include "ss/ss7.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>

TEST(ss7, 1) {
  Solver sut;

  EXPECT_EQ(false, sut.exist(1));
  sut.put(1);
  EXPECT_EQ(true, sut.exist(1));

  EXPECT_EQ(false, sut.exist(8));
  sut.put(8);
  EXPECT_EQ(true, sut.exist(8));
}

TEST(ss7, 2) {
  Solver sut;

  EXPECT_EQ(false, sut.exist(1));
}
