#include<gtest/gtest.h>
#include "as/as5.h"
#include <bits/stdc++.h>
using namespace std;

TEST(as5, 1) {
  string a = "a";
  string b = "bc";
  EXPECT_EQ(false, solve(a, b));
}

TEST(as5, 2) {
  string a = "aaa";
  string b = "aaa";
  EXPECT_EQ(true, solve(a, b));
}

TEST(as5, 3) {
  string a = "ab";
  string b = "abc";
  EXPECT_EQ(true, solve(a, b));
}

TEST(as5, 4) {
  string a = "b";
  string b = "a";
  EXPECT_EQ(true, solve(a, b));
}
