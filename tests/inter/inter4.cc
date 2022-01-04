#include "inter/inter4.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;

TEST(inter4, 1) {

  vector<vector<int>> grid = {
    {'o', 'o', 'x'},
    {'o', 'x', 'x'},
    {'o', ' ', ' '},
  };
  EXPECT_EQ(Winner::O, solve(grid)); 
}

TEST(inter4, 2) {
  vector<vector<int>> grid = {
    {'o', 'o', 'x'},
    {' ', 'x', 'x'},
    {'o', ' ', ' '},
  };
  EXPECT_EQ(Winner::None, solve(grid)); 
}

TEST(inter4, 3) {
  vector<vector<int>> grid = {
    {'o', 'o', 'x'},
    {' ', 'x', 'x'},
    {'x', ' ', ' '},
  };
  EXPECT_EQ(Winner::X, solve(grid)); 
}

TEST(inter4, 4) {

  vector<vector<int>> grid = {
    {'o', 'o', 'x'},
    {'o', 'x', 'x'},
    {'o', ' ', ' '},
  };
  EXPECT_EQ(Winner::O, solve2(grid)); 
}

TEST(inter4, 5) {
  vector<vector<int>> grid = {
    {'o', 'o', 'x'},
    {' ', 'x', 'x'},
    {'o', ' ', ' '},
  };
  EXPECT_EQ(Winner::None, solve2(grid)); 
}

TEST(inter4, 6) {
  vector<vector<int>> grid = {
    {'o', 'o', 'x'},
    {' ', 'x', 'x'},
    {'x', ' ', ' '},
  };
  EXPECT_EQ(Winner::X, solve2(grid)); 
}
