#include "c/c8.h"
#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

TEST(c8, 1) {

  Node *root = new Node(23);
  root->left = new Node(0);
  root->right = new Node(1);
  root->left->right = new Node(2);

  Node *res = solve(root);

  EXPECT_EQ(23, res->v);
  EXPECT_EQ(0, res->left->v);
  EXPECT_EQ(1, res->right->v);
  EXPECT_EQ(2, res->left->right->v);

  EXPECT_FALSE(res == root);
  EXPECT_FALSE(root->left == res->left);
}
