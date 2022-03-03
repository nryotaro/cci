#include <bits/stdc++.h>
using namespace std;

class Solve final {
public:
  void track(int x) { mulset.insert(x); }
  int getRankOfNumber(int x) {
    auto iter = upper_bound(mulset.begin(), mulset.end(), x);
    if (iter == mulset.begin())
      return 0;
    int dist = distance(mulset.begin(), iter);
    if (*(next(iter, -1)) == x)
      return dist - 1;
    return dist;
    /*
    x = 3
    mulset: 1 2 3
    ans 2
    iter == mulse.end();
    distance(mulset.begin(), iter) == 3;

    x = 3
    mulset: 1 2
    ans 2
    iter == mulset.end()
    distance(mulset.begin(), iter) == 2;

    x = 4
    mulset: 1 3 4 4 5 ..
    ans = 3
    *iter = 5
    distance(mulset.begin(), iter) == 4;
    */
  }

private:
  multiset<int> mulset;
};
// int main() {
//   Solve s;
//   s.track(5);
//   s.track(1);
//   s.track(4);
//   s.track(4);
//   s.track(5);
//   s.track(9);
//   s.track(7);
//   s.track(13);
//   s.track(3);
//   cout << s.getRankOfNumber(1) << endl;
//   cout << s.getRankOfNumber(3) << endl;
//   cout << s.getRankOfNumber(4) << endl;
//   return 0;
// }
