#include "tg/tg4.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;


TEST(tg4, 1) {
  Node *a =  new Node(0), *b = new Node(1), *c = new Node(2), *d = new Node(3), *e = new Node(4);
  c->left = b;
  b->left = a;
  c->right = d;
  d->right = e;
  EXPECT_EQ(true, solve(a));
}

TEST(tg4, 2) {
  Node *a =  new Node(0), *b = new Node(1), *c = new Node(2);
  c->left = b;
  b->left = a;
  EXPECT_EQ(false, solve(c));
}
