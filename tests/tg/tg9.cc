#include "tg/tg9.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(tg9, 1) {
  Node *root = new Node(2);
  Node *left = new Node(1);
  Node *right = new Node(3);
  root->left = left;
  root->right = right;
  vector<vector<int>> ans = {{2, 1, 3}, {2, 3, 1}};
  EXPECT_EQ(ans, solve(root));
}

TEST(tg9, 2) {
  Node *a = new Node(5);
  Node *b = new Node(3);
  Node *c = new Node(1);
  Node *d = new Node(4);
  Node *e = new Node(6);
  a->left = b;
  a->right = e;
  b->left = c;
  b->right = d;

  solve(a);
}
