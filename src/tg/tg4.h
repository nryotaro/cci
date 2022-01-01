
class Node final {
public:
  int value;
  Node* left;
  Node* right;
  Node(int value);
};

bool solve(Node* root);
