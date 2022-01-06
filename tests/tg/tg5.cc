#include "tg/tg5.h"
#include <gtest/gtest.h>
using namespace std;

TEST(tg5, 1) {
  Node *a = new Node(5), *b = new Node(3), *c = new Node(7), *d = new Node(2),
       *e = new Node(6), *f = new Node(8);

  a->left = b;
  a->right = c;
  b->left = d;
  c->left = e;
  c->right = f;
  EXPECT_EQ(true, solve(a));
}

TEST(tg5, 2) {
  Node *a = new Node(5), *b = new Node(3), *c = new Node(7), *d = new Node(2),
       *e = new Node(6), *f = new Node(8);

  a->left = b;
  a->right = c;
  b->left = d;
  c->left = f;
  c->right = e;
  EXPECT_EQ(false, solve(a));
}
