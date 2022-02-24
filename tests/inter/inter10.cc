#include "inter/inter10.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(inter10, 1) {
  vector<Person> people = {Person(1989, 1996), Person(1970, 1980),
                           Person(1971, 2000), Person(1980, 1989)};

  EXPECT_EQ(1980, solve(people));
}
