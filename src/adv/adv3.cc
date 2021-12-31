#include <bits/stdc++.h>
#include <random>
using namespace std;

int *solve(int a[], int length, int m) {
  assert(length <= m);
  int *res = new int[m];
  for(int i = 0;i<m;i++) {
    res[i] = a[i];
  }
  random_device device;
  mt19937 engine(device());
  
  for(int i = m;i<length;i++) {
    normal_distribution<> dist(0, i);
    int k = dist(engine);
    if(k < m) {
      res[k] = a[i];
    }
  }
  return res;
}
