#include "ss/ss9.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(ss9, 1) {
  vector<vector<int>> matrix = {
      {1, 2, 3, 4, 4}, {4, 4, 5, 5, 6}, {7, 8, 9, 9, 9}};
  pair<int, int> ans = {1, 2};
  EXPECT_EQ(ans, solve(matrix, 5));
}

TEST(ss9, 2) {
  vector<vector<int>> matrix = {
      {1, 2, 3, 4, 4}, {4, 4, 5, 5, 6}, {7, 8, 9, 9, 9}};
  pair<int, int> ans = {-1, -1};
  EXPECT_EQ(ans, solve(matrix, 10));
}
