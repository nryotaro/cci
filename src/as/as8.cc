#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &matrix) {

  int h = matrix.size(), w = matrix[0].size();
  vector<bool> h_zero(h, false), w_zero(w, false);

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (matrix[i][j] == 0)
        h_zero[i] = w_zero[j] = true;
    }
  }
  for (int i = 0; i < h; i++) {
    if (h_zero[i]) {
      for (int j = 0; j < w; j++) {
        matrix[i][j] = 0;
      }
    }
  }

  for (int j = 0; j < w; j++) {
    if (w_zero[j]) {
      for (int i = 0; i < h; i++)
        matrix[i][j] = 0;
    }
  }
}
//
