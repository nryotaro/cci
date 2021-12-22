#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include "inter/inter2.h"
using namespace std;

TEST(inter2, 1) {

  WordFrequency freq = WordFrequencyFactory().create("all in the golden after noon. quick brown fox");
  EXPECT_EQ(0, freq.lookUpFrequency("word"));
  EXPECT_EQ(1, freq.lookUpFrequency("fox"));
}
