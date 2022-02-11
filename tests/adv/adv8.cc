#include "adv/adv8.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(adv8, 1) {
  vector<int> ht = {65, 70, 56, 75, 60, 68};
  vector<int> wt = {100, 150, 90, 190, 95, 110};
  EXPECT_EQ(6, solve(ht, wt));
}
