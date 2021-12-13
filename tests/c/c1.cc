#include "c/c1.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(c1, 1) {
    vector<string> ans = {"golden", "afternoon"};
    EXPECT_EQ(ans, solve(2, "../../../tests/c/c1.txt"));
}