#include <bits/stdc++.h>
using namespace std;

void *align_malloc(size_t required_bytes, size_t alignment) {
  size_t req = required_bytes + alignment + sizeof(void *);
  void *p = malloc(req);
  void *a = (void *)(((size_t)p) & ~(alignment - (size_t)1));
  cout << (alignment - (size_t)1) << endl;
  cout << ~(alignment - (size_t)1) << endl;
  cout << p << endl;
  cout << a << endl;
  return p;
}

// int main() {
//   void *p= malloc(sizeof(void*));
//   cout << p << endl;
//   void**q = &p;

//   cout << *q << endl;
//   return 0;
// }
