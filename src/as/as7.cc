#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<vector<int>> &matrix) {
  int n = matrix.size(), from = 0, to = n - 1;

  while (from < to) {
    for (int i = from; i < to; i++) {
      int ul = matrix[from][i];
      int ur = matrix[i][n - 1 - from];
      int lr = matrix[n - 1 - from][n - 1 - i];
      int ll = matrix[n - 1 - i][from];
      matrix[from][i] = ll;
      matrix[i][n - 1 - from] = ul;
      matrix[n - 1 - from][n - 1 - i] = ur;
      matrix[n - 1 - i][from] = lr;
    }
    from++;
    to--;
  }
}
