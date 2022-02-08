#include <vector>

class BitFlag {
public:
  BitFlag(int n);

  void set(int i, bool t);
  bool get(int i);

private:
  std::vector<int> flags;
};
