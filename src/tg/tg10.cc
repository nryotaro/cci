#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int v;
  Node *left, *right;
  Node(int v, Node *left, Node *right);
  Node(int v);
};

Node::Node(int v, Node *left, Node *right) : v(v), left(left), right(right) {}
Node::Node(int v) {}

bool same_tree(Node *node1, Node *node2) {
  if (node1 == nullptr && node2 == nullptr)
    return true;
  if (node1 == nullptr || node2 == nullptr)
    return false;
  if (node1->v == node2->v) {
    return same_tree(node1->left, node2->left) &&
           same_tree(node1->right, node2->right);
  } else {
    return false;
  }
}

// Return true if T2 contains T1 else false
bool solve(Node *t1, Node *t2) {
  if (t1 == nullptr)
    return false;
  if (t1->v < t2->v) {
    return solve(t1->right, t2);
  }
  bool res = false;
  if (t1->v == t2->v) {
    res = same_tree(t1, t2);
  }
  if (res)
    return true;
  return solve(t1->left, t2);
}

/*
t1
     5
   /   \
  3     6
 / \   / \
1   4 6   7

t2
   3
  / \
 1   4
t3
*/
// int main() {
//   Node* t1 = new Node(
//     5,
//     new Node(3, new Node(1), new Node(4)),
//     new Node(6, new Node(6), new Node(7))
//   );

//   Node* t2 = new Node(3, new Node(1), new Node(4));
//   assert(solve(t1, t2));

//   Node *t3 = new Node(8, new Node(2), nullptr);
//   assert(!solve(t1, t3));
// }
