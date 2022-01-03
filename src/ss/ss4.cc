#include "ss4.h"
#include<bits/stdc++.h>
using namespace std;

MyArray::MyArray(vector<int> array): array(array){}

int MyArray::elementAt(int index) {
  if(index < (int) array.size())
    return array[index];
  else
    return -1;
}

int solve(MyArray myArray, int x) {
  int ub = numeric_limits<int>::max() - 10, lb = -1;
  while(ub - lb > 1) {
    int mid = (ub + lb) / 2;
    int mid_v = myArray.elementAt(mid);
    if(mid_v == -1 || x <= mid_v) {
      ub = mid;
    } else
      lb = mid;    
  }
  if(myArray.elementAt(ub) == x)
    return ub;
  else
    return -1;  
}
