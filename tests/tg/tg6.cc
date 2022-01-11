#include "tg/tg6.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(tg6, 1) {
  Node<int> *a = new Node<int>(6);
  Node<int> *b = new Node<int>(3);
  Node<int> *c = new Node<int>(10);
  Node<int> *d = new Node<int>(2);
  Node<int> *e = new Node<int>(8);
  Node<int> *f = new Node<int>(11);
  Node<int> *g = new Node<int>(4);

  a->left = b;
  b->left = d;
  b->parent = a;
  c->parent = a;
  b->right = g;
  d->parent = b;
  g->parent = b;
  a->right = c;
  c->left = e;
  c->parent = a;
  c->right = f;
  e->parent = c;
  f->parent = c;
  a->parent = nullptr;

  EXPECT_EQ(e, solve(a));
  EXPECT_EQ(g, solve(b));
  EXPECT_EQ(f, solve(c));
  EXPECT_EQ(b, solve(d));
  EXPECT_EQ(c, solve(e));
  EXPECT_EQ(nullptr, solve(f));  
}
