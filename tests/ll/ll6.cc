#include <gtest/gtest.h>
#include "ll/ll6.h"
#include <bits/stdc++.h>
using namespace std;

TEST(ll6, 1) {
  list<char> lst = {'a', 'b', 'b', 'a'};
  EXPECT_EQ(true, solve(lst));
}

TEST(ll6, 2) {
  list<char> lst = {'a', 'b', 'a'};
  EXPECT_EQ(true, solve(lst));
}

TEST(ll6, 3) {
  list<char> lst = {'a', 'b'};
  EXPECT_EQ(false, solve(lst));
}

TEST(ll6, 4) {
  list<char> lst = {};
  EXPECT_EQ(true, solve(lst));
}
