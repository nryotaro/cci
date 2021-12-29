#include <gtest/gtest.h>
#include "as/as3.h"
#include <bits/stdc++.h>
using namespace std;


TEST(as3, 1) {
  //char s[] = {'M', 'r', ' ', 'J', 'o', 'h', 'n', ' ', 'S', 'm', 'i', 't', 'h', ' ', ' ', ' ', ' ', '\0'};
  char s[] = "Mr John Smith      ";
  //“Mr John Smith ”, 13
  solve(s, 13);
  string res(s);
  string ans = "Mr%20John%20Smith";
  EXPECT_EQ(ans, res);
}

TEST(as3, 2) {
  char s[] = "    ";
  //“Mr John Smith ”, 13
  solve(s, 1);
  string res(s);
  string ans = "%20";
  EXPECT_EQ(ans, res);
}

TEST(as3, 3) {
  char s[] = "doge";
  EXPECT_EQ('\0', s[4]);
}
