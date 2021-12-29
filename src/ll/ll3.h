template <typename T> class Node final {
public:
  T value;
  Node<T> *next;
  Node(T value) : value(value){};
};

template <typename T> void solve(Node<T> *node) {  
  Node<T> *point = node;

  point->value = point->next->value;
  point->next = point->next->next;
}
