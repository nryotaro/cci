#include "sq/sq6.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;

TEST(sq6, 1) {
  AnimalQueue que;
  Dog doge("doge");
  
  Cat cate("cate");  
  que.enqueue(doge);
  que.enqueue(cate);

  Cat tama("tama");
  que.enqueue(tama);
  Cat mike("mike");
  EXPECT_EQ(doge,que.dequeueDog());
}
