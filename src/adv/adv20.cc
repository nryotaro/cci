#include <bits/stdc++.h>
using namespace std;

class Solver final {
public:
  multiset<int> less, greater;

  void accept(int value) {
    if (less.size() == greater.size()) {
      if (less.size() == 0) {
        less.insert(value);
      } else {
        int greater_min = *greater.begin();
        if (greater_min <= value) {
          greater.erase(greater_min);
          less.insert(greater_min);
          greater.insert(value);
        } else { // value < greater_min
          less.insert(value);
        }
      }
    } else {
      int less_max = *next(less.end(), -1);
      if (value <= less_max) {
        less.erase(less_max);
        less.insert(value);
        greater.insert(less_max);
      }
      greater.insert(value);
    }
  }

  double getMedian() {
    if (less.size() == greater.size()) {
      int a = *next(less.end(), -1);
      int b = *greater.begin();
      return ((double)(a + b)) / 2.0;
    } else {
      return *next(less.end(), -1);
    }
  }
};
// int main() {
//   Solver s;
//   s.accept(1);
//   cout << s.getMedian() << endl;
//   s.accept(4);
//   cout << s.getMedian() << endl;
//   return 0;
// }
