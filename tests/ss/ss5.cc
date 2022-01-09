#include "ss/ss5.h"
#include<gtest/gtest.h>
#include<bits/stdc++.h>
using namespace std;

TEST(ss5, 1) {
  string ary[] = {
    "at", // 0
    "", // 1 
    "", // 2 
    "", // 3 
    "ball", // 4
    "", // 5
    "", // 6
    "car", // 7
    "", // 8 
    "", // 9
    "dad", // 10
    "", // 11
    "" // 12
  };
  EXPECT_EQ(4, solve(ary, 13, "ball"));
}

TEST(ss5, 2) {
  string ary[] = {"", "abc", ""};
  EXPECT_EQ(-1, solve(ary, 3, "d"));
}

TEST(ss5, 3) {
  string ary[] = {""};
  EXPECT_EQ(-1, solve(ary, 1, "d"));
}
