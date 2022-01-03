#include <chrono>
#include <gtest/gtest.h>
#include "oop/oop4.h"
#include <bits/stdc++.h>
using namespace std;

TEST(oop4, 1) {
  EXPECT_EQ(CarId(3), CarId(3));  
}

TEST(oop4, 2) {
  EXPECT_EQ(SpaceId(3), SpaceId(3));
}

TEST(oop4, 3) {
  chrono::time_point time = chrono::system_clock::now();
  chrono::time_point t = chrono::system_clock::now();
  chrono::duration b = time - t;
  b + chrono::minutes(3);
}
