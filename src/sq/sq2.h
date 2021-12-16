
class MinStack {
  public:
    MinStack(int stack[], int minStack[], int size);

    void push(int value);

    int pop();
    int minValue();


  private:
    int *stack;
    int *minStack;
    int size;
    int index;
};
