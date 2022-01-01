#include "ll4.h"
#include <bits/stdc++.h>
using namespace std;

Node::Node(int value): value(value){}

void solve(Node * root, int pivot) {
  vector<Node*> points, pivots;
  Node* point = root;
  while(point != nullptr) {
    if(point->value == pivot) {
      pivots.push_back(point);
    }
    points.push_back(point);
    point = point->next;
  }
  if((int) pivots.size() == 0)
    return;

  while((int)pivots.size() != 0) {
    Node* node = pivots.back(), *dest = points.back();
    swap(dest->value, node->value);
    pivots.pop_back();
    points.pop_back();
  }
}
