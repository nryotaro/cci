#include <stack>
class MyQueue final {
public:
  MyQueue();
  int top();
  void pop();
  void push(int v);

private:
  std::stack<int> forward;
  std::stack<int> backward;
  void move();
};
