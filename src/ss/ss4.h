#include <vector>

class MyArray final {
  
public:
  MyArray(std::vector<int> array);
  int elementAt(int index);
  
private:
  std::vector<int> array;
};


int solve(MyArray myArray, int x);
