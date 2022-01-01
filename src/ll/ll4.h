
class Node final {
public:
  int value;
  Node* next;
  Node(int value);
};


void solve(Node* root, int pivot);
