#include "sq5.h"
#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &stk) {
  if(stk.empty())
    return;
  stack<int> temp_stk;
  int mini = stk.top(), count = 1;
  stk.pop();
  temp_stk.push(mini);
  while(!stk.empty()) {
    int value = stk.top();
    if(value < mini) {
      mini = value;
      count = 1;
    } else if(value == mini)
      count++;
    temp_stk.push(value);
    stk.pop();
  }
  while(!temp_stk.empty()) {
    int value = temp_stk.top();
    temp_stk.pop();
    if(mini < value) {
      stk.push(value);
    }
  }
  for(int i= 0;i<count;i++)
    stk.push(mini);
  
}
