#include "sq/sq4.h"
#include <gtest/gtest.h>

TEST(sq4, 1) {

  MyQueue que;

  que.push(1);
  EXPECT_EQ(1, que.top());  
}

TEST(sq4, 2) {
  MyQueue que;
  que.push(1);
  que.push(2);  
  EXPECT_EQ(1, que.top());
  que.pop();
  EXPECT_EQ(2, que.top());
}
