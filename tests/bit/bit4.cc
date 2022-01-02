#include "bit/bit4.h"
#include <gtest/gtest.h>
#include<bits/stdc++.h>
using namespace std;

TEST(bit4, 1) {
  pair<int, int> res = solve(3);
  pair<int, int > ans = {5, -1073741824};
  EXPECT_EQ(ans, res);
  //  cout << res.first << ", " << res.second << endl;
  //  bitset<32> bs(res.second);
  //  cout << bs << endl;
}


TEST(bit4, 2) {
  // 11010 -> 26
  pair<int, int> res = solve(26);
  pair<int, int > ans = {28, 25};
  EXPECT_EQ(ans, res);
}
