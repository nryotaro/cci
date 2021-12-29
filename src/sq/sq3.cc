#include "sq3.h"
#include <bits/stdc++.h>
using namespace std;


SetOfStacks::SetOfStacks(int size): size(size) {
  int *stack = new int[size];
  stacks.push_back(stack);
  points.push_back(-1);
}

void SetOfStacks::push(int value) {
  int &point = points.back();
  if(point == size - 1) {
    int *next_stack = new int[size];
    next_stack[0] = value;
    stacks.push_back(next_stack);
    points.push_back(0);
  } else {
    point++;
    int *s = stacks.back();
    s[point] = value;
  }
}

void SetOfStacks::print_state() {
  
  int a = stacks.size();
  for(int i = 0;i<a;i++) {
    for(int j = 0;j<=points[i];j++) {
      int *s = stacks[i];
      cout << s[j] << " ";
    }
    cout << endl;
  }
}

int SetOfStacks::pop() {
  
  while(true) {
    int &point = points.back();    
    if(point >= 0) {
      int *s = stacks.back();
      int res = s[point--];
      return res;
    } else {
      delete stacks.back();
      stacks.pop_back();
      points.pop_back();
    }
  }
}

int SetOfStacks::popAt(int index) {
  int res = stacks[index][points[index]];
  points[index]--;
  return res;
}

