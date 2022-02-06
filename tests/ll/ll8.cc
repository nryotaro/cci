#include "ll/ll8.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>

TEST(ll8, 1) {

  Node *a = new Node(0);
  Node *b = new Node(0);
  Node *c = new Node(0);
  a->next = b;
  b->next = c;
  c->next = a;
  EXPECT_EQ(a, solve(a));
}
