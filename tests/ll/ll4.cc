#include "ll/ll4.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>

TEST(ll4, 1) {
  Node *a = new Node(4), *b = new Node(1), *c = new Node(5), *d = new Node(1);
  a->next = b;
  b->next = c;
  c->next = d;
  solve(a, 4);
  EXPECT_EQ(1, a->value);
  EXPECT_EQ(1, a->next->value);
  EXPECT_EQ(5, a->next->next->value);
  EXPECT_EQ(4, a->next->next->next->value);
}
