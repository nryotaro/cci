#include "tg4.h"
#include <bits/stdc++.h>
using namespace std;

Node::Node(int value) : value(value) {}

bool solve(Node *node, set<int> &depths, int current) {
  if (node == nullptr) {
    depths.insert(current);
    if ((int)depths.size() > 3)
      return false;
    else if ((int)depths.size() == 1)
      return true;
    else {
      return abs(*depths.begin() - *prev(depths.end(), 1)) <= 1;
    }
  }
  return solve(node->left, depths, current + 1) &&
         solve(node->right, depths, current + 1);
}

bool solve(Node *root) {
  set<int> depths;
  return solve(root, depths, 0);
}
