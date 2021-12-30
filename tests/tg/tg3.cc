#include "tg/tg3.h"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;

TEST(tg3, 1) {
  Node *a = new Node(5), *b = new Node(4), *c = new Node(6), *d = new Node(3),
       *e = new Node(7), *f = new Node(2);

  a->left = b;
  b->left = d;
  a->right = c;
  b->left = d;
  c->right = e;
  d->left = f;

  vector<list<int>> res= solve(a);

  EXPECT_EQ(4, res.size());
  list<int> ans0 = {5};
  EXPECT_EQ(ans0, res[0]);
  list<int> ans1 = {4, 6};
  EXPECT_EQ(ans1, res[1]);
  list<int> ans2 = {3, 7};
  EXPECT_EQ(ans2, res[2]);
  list<int> ans3 = {2};
  EXPECT_EQ(ans3, res[3]); 
}
