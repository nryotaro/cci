#include "adv/adv4.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;


TEST(adv4, 1) {
  vector<vector<int>> vec = {
    {0, 0, 0},
    {0, 0, 1},
    //    {0, 1, 0},
    {0, 1, 1},
    {1, 0, 0},
  };
  EXPECT_EQ(2, solve(vec)); 
}

TEST(adv4, 2) {
  vector<vector<int>> vec = {
    {0, 0, 0},
    //{0, 0, 1},
    {0, 1, 0},
    {0, 1, 1},
    {1, 0, 0},
  };
  EXPECT_EQ(1, solve(vec)); 
}
