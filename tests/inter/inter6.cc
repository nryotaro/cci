#include <inter/inter6.h>
#include <gtest/gtest.h>
using namespace std;

TEST(inter6, 1) {
  vector<int> a = {1, 3, 15, 11, 2}, b = {23, 127, 235, 19, 8};
  EXPECT_EQ(3, solve(a, b));
}

TEST(inter6, 2) {
  vector<int> a = {5, 7, 9, 10, 12}, b = {1, 10};
  EXPECT_EQ(0, solve(a, b));
}
