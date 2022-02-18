#include <bits/stdc++.h>
using namespace std;

template <typename T> class CircularArray final {
public:
  CircularArray(vector<T> array) : array(array), head_index(0) {}

  void rotate(int num) {
    if (num < 0) {
      int n = array.size();
      num += abs(num) / n * n + n;
    }
    head_index = (head_index + num) % array.size();
  }

  vector<T> getCurrentArray() {
    vector<T> res;
    for (int i = 0, j = head_index; i < (int)array.size(); i++) {
      res.push_back(array[j]);
      j++;
      j %= array.size();
    }
    return res;
  }

private:
  vector<T> array;
  int head_index;
};
