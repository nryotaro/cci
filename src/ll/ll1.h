#include <bits/stdc++.h>
using namespace std;

template <class T> class Node {
  public:
    T val;
    Node *next;
    Node(T val);
};

template <class T> Node<T>::Node(T val) : val(val){};

template <class T> void solve(Node<T> *head) {
    unordered_set<T> exist;
    Node<T> *cursor = head, *prev;
    while(cursor != nullptr) {
        if(exist.find(cursor->val) == exist.end()) {
            exist.insert(cursor->val);
            prev = cursor;
            cursor = cursor->next;
            continue;
        }
        prev->next = cursor->next;
        delete cursor;
        cursor = prev->next;
    }
}