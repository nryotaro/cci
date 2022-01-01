#include "sq4.h"
#include <bits/stdc++.h>
using namespace std;

MyQueue::MyQueue() {}

void MyQueue::push(int v) { forward.push(v); }

void MyQueue::pop() {
  move();
  backward.pop();
}

int MyQueue::top() {
  move();
  return backward.top();
}

void MyQueue::move() {
  if (!backward.empty())
    return;

  while (!forward.empty()) {
    int v = forward.top();
    backward.push(v);
    forward.pop();
  }
}
