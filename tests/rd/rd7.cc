#include "rd/rd7.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(rd7, 1) {
  vector<string> ans = {""};
  EXPECT_EQ(ans, solve(""));
}

TEST(rd7, 2) {
  vector<string> ans = {"a"};
  EXPECT_EQ(ans, solve("a"));
}

TEST(rd7, 3) {
  unordered_set<string> ans = {"ba", "ab"};

  vector<string> res = solve("ab");
  EXPECT_EQ(ans, unordered_set<string>(res.begin(), res.end()));
}

TEST(rd7, 4) {
  unordered_set<string> ans = {"cba", "acb", "cab", "bca", "bac", "abc"};
  vector<string> res = solve("abc");
  EXPECT_EQ(ans, unordered_set<string>(res.begin(), res.end()));
}
