#include <bits/stdc++.h>
using namespace std;

struct pattern {
  int tf, ten, five, one;

  bool operator==(const pattern &other) const {
    return tf == other.tf && ten == other.ten && five == other.five &&
           one == other.one;
  }
  struct HashFunction {
    size_t operator()(const pattern &p) const {
      size_t r = 0;
      return r;
    }
  };
};
/*
template <> struct std::hash<pattern> {
  size_t operator()(pattern &p) const {
    size_t a = p.tf;
    return a;
  }
};
*/
void solve(int n, int tf, int ten, int five, int one,
           unordered_set<pattern, pattern::HashFunction> &res) {
  if (n == 0) {
    res.insert({tf, ten, five, one});
    return;
  }
  if (n >= 25) {
    solve(n - 25, tf + 1, ten, five, one, res);
  }
  if (n >= 10) {
    solve(n - 10, tf, ten + 1, five, one, res);
  }
  if (n >= 5) {
    solve(n - 5, tf, ten, five + 1, one, res);
  }
  solve(n - 1, tf, ten, five, one + 1, res);
}

// int main() {
//   unordered_set<pattern, pattern::HashFunction> res;
//   solve(32, 0, 0, 0, 0, res);
//   cout << res.size() << endl;
//   return 0;
// }
