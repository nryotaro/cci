#include "as/as7.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

TEST(as7, 1) {
  vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  solve(matrix);
  vector<vector<int>> ans = {
    {7, 4, 1},
    {8, 5, 2},
    {9, 6, 3}
  };
  EXPECT_EQ(ans, matrix);
}


TEST(as7, 2) {
  vector<vector<int>> matrix = {
    {1, 2},
    {3, 4},
  };
  solve(matrix);
  vector<vector<int>> ans = {
    {3, 1},
    {4, 2},
  };
  EXPECT_EQ(ans, matrix);
}
