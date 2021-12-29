#include <gtest/gtest.h>
#include "sq/sq3.h"
#include <bits/stdc++.h>
using namespace std;

TEST(sq3, 1) {
  SetOfStacks res(3);
  res.push(1);
  res.push(2);
  EXPECT_EQ(2, res.pop());
}

TEST(sq3, 2) {
  SetOfStacks res(3);
  res.push(1);
  res.push(2);
  res.push(3);
  res.push(4);  
  EXPECT_EQ(2, res.stacks.size());
  EXPECT_EQ(4, res.pop());
}

TEST(sq3, 3) {
  SetOfStacks res(2);
  res.push(1);
  res.push(2);
  res.print_state();
  res.push(3);
  res.push(4);
  res.push(5);
  EXPECT_EQ(4, res.popAt(1));
  EXPECT_EQ(3, res.popAt(1));  
  EXPECT_EQ(5, res.pop());
  EXPECT_EQ(2, res.pop());  
}


TEST(sq3, 4) {
  SetOfStacks res(2);
  res.push(1);
  res.push(2);
  EXPECT_EQ(2, res.pop());  
}
