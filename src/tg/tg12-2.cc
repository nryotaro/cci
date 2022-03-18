#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Node final {
public:
  int v;
  Node *left, *right;
  Node(int v, Node *left, Node *right) : v(v), left(left), right(right) {}
  Node(int v) : v(v) {}

  ~Node() {
    if (left != nullptr)
      delete left;
    if (right != nullptr)
      delete right;
  }
};

void traverse(Node *node, int k, int sum, unordered_map<int, int> &sum_patterns,
              int &result) {
  if (node == nullptr)
    return;
  sum += node->v;
  sum_patterns[sum]++;
  result += sum_patterns[sum - k];

  traverse(node->left, k, sum, sum_patterns, result);
  traverse(node->right, k, sum, sum_patterns, result);
  sum_patterns[sum]--;
}
int Solve(Node *node, int k) {
  int result = 0;
  unordered_map<int, int> sum_patterns;
  sum_patterns[0]++;
  traverse(node, k, 0, sum_patterns, result);
  return result;
}
/**
        1
     /    \
    3      2
   / \     / \
  4   4   1   0
 / \
2   1
 */
// int main() {
//   Node *root = new Node(
//       1, new Node(3, new Node(4, new Node(2), new Node(1)), new Node(4)),
//       new Node(2, new Node(1), new Node(0)));
//   cout << Solve(root, 2) << endl;
//   cout << Solve(root, 7) << endl;
//   cout << Solve(root, 1) << endl;
//   return 0;
// }
