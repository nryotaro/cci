#include "ss/ss8.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;
TEST(ss8, 1) {
  BitFlag flag(10);
  flag.set(9, true);
  EXPECT_EQ(true, flag.get(9));
}
