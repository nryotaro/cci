#include "ll/ll5.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;

TEST(ll5, 1) {
  list<int> a = {7, 1, 6};
  list<int> b = {5, 9, 2};
  list<int> res = solve(a, b);
  list<int> ans = {2, 1, 9};
  EXPECT_EQ(ans, res);
}


TEST(ll5, 2) {
  list<int> a = {9, 8};
  list<int> b = {5, 9, 9};
  list<int> res = solve(a, b);
  list<int> ans = {4, 8, 0, 1};
  EXPECT_EQ(ans, res);
}

TEST(ll5, 3) {
  list<int> a = {6, 1, 7};
  list<int> b = {2, 9, 5};
  list<int> res = solve2(a, b);
  list<int> ans = {9, 1, 2};
  EXPECT_EQ(ans, res);
}


TEST(ll5, 4) {
  list<int> a = {8, 9};
  list<int> b = {9, 9, 5};
  list<int> res = solve2(a, b);
  list<int> ans = {1, 0, 8, 4};
  EXPECT_EQ(ans, res);
}
