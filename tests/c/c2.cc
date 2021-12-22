#include "c/c2.h"
#include <gtest/gtest.h>

TEST(c2, 1) {
  char s[] = {'a', 'b', 'c', '\0'};
  char *str = s;
  solve(str);
  EXPECT_EQ('c', str[0]);
  EXPECT_EQ('b', str[1]);
  EXPECT_EQ('a', str[2]);
  EXPECT_EQ('\0', str[3]);
}

TEST(c2, 2) {
  char s[] = {'a', 'b', 'c', 'd', '\0'};
  char *str = s;
  solve(str);
  EXPECT_EQ('d', str[0]);
  EXPECT_EQ('c', str[1]);
  EXPECT_EQ('b', str[2]);
  EXPECT_EQ('a', str[3]);
  EXPECT_EQ('\0', str[4]);
}

