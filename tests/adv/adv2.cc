#include <gtest/gtest.h>
#include "adv/adv2.h"
#include <bits/stdc++.h>

using namespace std;

TEST(adv2, 1) {

  vector<Card> res = solve();

  EXPECT_EQ(52, res.size());
}
