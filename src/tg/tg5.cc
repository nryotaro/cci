#include "tg5.h"
#include <bits/stdc++.h>
using namespace std;

Node::Node(int val) : val(val) {}

bool solve(Node *node, int lb, int ub) {
  if (node == nullptr)
    return true;
  if (node->val <= lb || ub <= node->val)
    return false;

  return solve(node->left, lb, node->val) &&
    solve(node->right, node->val, ub);
}

bool solve(Node *root) {
  return solve(root, numeric_limits<int>::min(), numeric_limits<int>::max());
}
