#include<vector>

class SetOfStacks {
 public:
  int size;
  std::vector<int*> stacks;
  std::vector<int> points;
  SetOfStacks(int size);

  void push(int value);
  int pop();
  int popAt(int inex);

  void print_state();
};

