#include <stack>

class Tower {
public:
  Tower(int size);
  Tower();
  bool empty();
  int pop();
  void add(int i);
private:
  std::stack<int> stk;
};


void solve(int n, Tower &origin, Tower &destination, Tower &buffer);
