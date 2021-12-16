
template <class T> class Node {
  public:
    T value;
    Node<T> *next;
    Node(T value) : value(value), next(nullptr) {}
};

template <class T> T solve(Node<T> *node, int k) {
    T memory[k];
    int index = 0;
    Node<T> *pointer = node;
    while(pointer != nullptr) {
        memory[index] = pointer->value;
        index = (index + 1) % k;
        pointer = pointer->next;
    }
    return memory[index];
}