#include<vector>
#include<list>

class Node final {
 public:
  int value;
  Node *left;
  Node * right;

  Node(int value): value(value){
    left = right = nullptr;
  };
};

std::vector<std::list<int>> solve(Node* root);
