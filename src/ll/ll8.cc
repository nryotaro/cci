#include "ll8.h"
#include <bits/stdc++.h>
using namespace std;

Node::Node(int v) : v(v) {}

Node *solve(Node *root) {
  unordered_set<Node *> exist;
  Node *pointer = root;
  while (true) {
    if (exist.find(pointer) == exist.end()) {
      exist.insert(pointer);
      pointer = pointer->next;
    } else {
      return pointer;
    }
  }
  return 0;
}
