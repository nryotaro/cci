#include "design/design2.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(design2, 1) {
    unordered_map<int, unordered_set<int>> friends;
    friends[1].insert(2);
    friends[2].insert(1);
    friends[2].insert(3);
    friends[2].insert(4);
    friends[3].insert(2);
    friends[4].insert(2);
    friends[4].insert(5);
    friends[5].insert(4);
    vector<int> ans = {1, 2, 4, 5};
    EXPECT_EQ(
        ans
        , solve(friends, 1, 5));
    
}
/*
solve(
    std::unordered_map<int, std::unordered_set<int>>
    &friends, int a, int b)
*/