#include "c8.h"
#include <bits/stdc++.h>
using namespace std;

Node::Node(int v) : v(v) {}

Node *solve(Node *node) {
  if (node == nullptr)
    return nullptr;
  Node *res = new Node(node->v);
  res->left = solve(node->left);
  res->right = solve(node->right);

  return res;
}
