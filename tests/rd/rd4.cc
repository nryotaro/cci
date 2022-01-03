#include "rd/rd4.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;

TEST(rd4, 1) {
  vector<int> v =  {0, 1 , 2 , 4};
  vector<unordered_multiset<int>> res = solve(v);
  EXPECT_EQ(16, res.size());
  /*
  for(auto v: res) {
    for(auto e: v)
      cout << e << " ";
    cout << endl;
  }
  */
}
