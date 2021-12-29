#include <gtest/gtest.h>
#include "ll/ll3.h"
#include <bits/stdc++.h>
using namespace std;


TEST(ll3, 1) {
  Node<int> a(0), b(1), c(2), d(3), e(4);
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = nullptr;

  solve(&c);
  EXPECT_EQ(0, a.value);
  EXPECT_EQ(1, a.next->value);
  EXPECT_EQ(3, a.next->next->value);
  EXPECT_EQ(4, a.next->next->next->value);
  EXPECT_EQ(nullptr, a.next->next->next->next);
}
