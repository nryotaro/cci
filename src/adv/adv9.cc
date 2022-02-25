#include <bits/stdc++.h>
using namespace std;

int solve(int k) {
  int n = 10000;
  vector<bool> is_prime(n, true);
  is_prime[0] = false;
  is_prime[1] = false;
  vector<int> factor357;
  for (int i = 2; i < n; i++) {
    if (is_prime[i]) {
      if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        factor357.push_back(i);
      if (i != 3 && i != 5 && i != 7) {
        for (int j = i + i; j < n; j += i) {
          is_prime[j] = false;
        }
      }
    }
  }
  return factor357[k - 1];
}
