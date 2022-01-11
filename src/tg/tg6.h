
template<typename T> class Node final {
public:
  T value;
  Node* parent;
  Node* left;
  Node* right;
  Node(T value): value(value) {}
};

template<typename T> Node<T>* solve(Node<T> *node) {
  if(node->right == nullptr){
    while(true) {
      Node<T> *parent = node->parent;
      if(node->parent == nullptr)
	return nullptr;
      if(parent->left == node)
	return parent;
      else
	node = parent;
    }
    return node->parent;    
  }


  Node<T> *res = node->right;
  while(res->left != nullptr)
    res = res->left;
  return res;
}
