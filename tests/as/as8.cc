#include "as/as8.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(as8, 1) {
  vector<vector<int>> matrix = {{1, 2}, {0, 1}};
  solve(matrix);
  vector<vector<int>> ans = {{0, 2}, {0, 0}};
  EXPECT_EQ(ans, matrix);
}
