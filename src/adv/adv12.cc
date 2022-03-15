#include <bits/stdc++.h>
using namespace std;

class BiNode final {
public:
  int data;
  BiNode *node1, *node2;

  BiNode(int data, BiNode *node1, BiNode *node2)
      : data(data), node1(node1), node2(node2) {}
  BiNode(int data) : data(data) {}
};

pair<BiNode *, BiNode *> rec(BiNode *node) {
  if (node == nullptr)
    return {nullptr, nullptr};

  pair<BiNode *, BiNode *> result1 = rec(node->node1);
  BiNode *head = node;
  BiNode *tail = node;
  if (result1.first != nullptr) {
    head = result1.first;
    node->node1 = result1.second;
    result1.second->node2 = node;
  }
  pair<BiNode *, BiNode *> result2 = rec(node->node2);
  if (result2.first != nullptr) {
    result2.first->node1 = node;
    node->node2 = result2.first;
    tail = result2.second;
  }
  return {head, tail};
}

BiNode *solve(BiNode *root) {
  pair<BiNode *, BiNode *> result = rec(root);
  return result.first;
}

// int main() {
//   BiNode* root = new BiNode(
//     4,
//     new BiNode(2, new BiNode(1), new BiNode(3)),
//     new BiNode(6, nullptr, new BiNode(7))
//   );
//   BiNode* res = solve(root);
//   cout << res->data << endl;
//   assert(res->data == 1);
//   assert(res->node1 == nullptr);
//   assert(res->node2 != nullptr);
//   cout << res->node2->data << endl;
//   return 0;
// }
