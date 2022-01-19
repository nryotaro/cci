#include <bits/stdc++.h>
using namespace std;

template <typename T> class Node final {
public:
  T v;
  Node<T> *next;
  Node(T v) : v(v) {}
};

template <typename T> class Result final {
public:
  bool is_same;
  unordered_set<Node<T> *> commons;
  Result(bool is_same, unordered_set<Node<T> *> commons)
      : is_same(is_same), commons(commons){};
};

template <typename T> Result<T> solve(Node<T> *head0, Node<T> *head1) {
  unordered_set<Node<T> *> nodes;
  bool is_same = true;
  Node<T> *pointer0 = head0, *pointer1 = head1;
  while (true) {
    if (pointer0 != pointer1) {
      is_same = false;
    }
    if(pointer0 != nullptr) {
      nodes.insert(pointer0);
      pointer0 = pointer0->next;
    }
    if(pointer1 != nullptr) {
      pointer1 = pointer1->next;
    }
    if(pointer0 == nullptr && pointer1 ==nullptr) {
      break;
    }
  }
  unordered_set<Node<T>*> commons;
  pointer1 = head1;
  while(pointer1 != nullptr) {
    if(nodes.find(pointer1) != nodes.end()) {
      commons.insert(pointer1);
    }
    pointer1 = pointer1->next;
  }
  return Result(is_same, commons);
}
