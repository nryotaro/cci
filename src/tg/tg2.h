class Node {
  public:
    int value;
    Node *left;
    Node *right;
    Node(int value);

    ~Node();
};

Node *solve(int array[], int size);
