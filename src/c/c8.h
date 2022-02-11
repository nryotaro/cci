class Node final {
public:
  int v;
  Node *left;
  Node *right;
  Node(int v);
};

Node *solve(Node *node);
