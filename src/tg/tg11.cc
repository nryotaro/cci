#include <bits/stdc++.h>
using namespace std;

class Node final {
public:
  int v;
  Node(int v) : v(v), left(nullptr), right(nullptr) {}
  void insert(int new_v) {
    if (left == nullptr) {
      left = new Node(new_v);
    } else if (right == nullptr) {
      right = new Node(new_v);
    } else {
      int leftSize = left->countSize();
      int rightSize = right->countSize();
      if (leftSize <= rightSize) {
        left->insert(new_v);
      } else {
        right->insert(new_v);
      }
    }
  }
  Node *search(int search_v) {
    if (search_v == v)
      return this;
    if (left != nullptr) {
      Node *res = left->search(search_v);
      if (res != nullptr)
        return res;
    }
    if (right == nullptr)
      return nullptr;
    return right->search(search_v);
  }

  Node *getRandomNode() {
    random_device rnd;
    mt19937 mt(rnd());
    int random_value = abs((int)mt());
    int size = countSize();
    int targetIndex = random_value % size;
    cout << targetIndex << endl;
    return getNodeByIndex(targetIndex, 0);
  }

  Node *getNodeByIndex(int targetIndex, int offset) {
    int index = offset;
    if (left != nullptr) {
      index += left->countSize();
    }
    if (targetIndex < index) {
      return left->getNodeByIndex(targetIndex, offset);
    } else if (targetIndex == index) {
      return this;
    } else if (right != nullptr) {
      return right->getNodeByIndex(targetIndex, offset + index + 1);
    }
    return nullptr;
  }

private:
  int countSize() {
    int res = 1;
    if (left != nullptr)
      res += left->countSize();
    if (right != nullptr)
      res += right->countSize();
    return res;
  }

private:
  Node *left;
  Node *right;
};

// int main() {
//   Node root = Node(0);
//   root.insert(3);
//     root.insert(2);
//   cout << root.getRandomNode()->v << endl;
//   return 0;
// }
