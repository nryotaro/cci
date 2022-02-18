#include "oop/oop9.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(oop9, 1) {
  CircularArray<int> sut({1, 2, 3});

  vector<int> ans;
  ans = {1, 2, 3};
  EXPECT_EQ(ans, sut.getCurrentArray());
  sut.rotate(1);
  ans = {2, 3, 1};
  EXPECT_EQ(ans, sut.getCurrentArray());
  sut.rotate(-1);
  ans = {1, 2, 3};
  EXPECT_EQ(ans, sut.getCurrentArray());
  sut.rotate(-4);
  ans = {3, 1, 2};
  EXPECT_EQ(ans, sut.getCurrentArray());
}
