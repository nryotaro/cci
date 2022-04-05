#include <bits/stdc++.h>
using namespace std;
struct Result {
  int ul_row, ul_col, br_row, br_col;

  friend ostream &operator<<(ostream &os, const Result &result);
};

ostream &operator<<(ostream &os, const Result &result) {
  os << result.ul_row << " , " << result.ul_col << ", " << result.br_row
     << " , " << result.br_col;
  return os;
}

Result solve(int n, vector<vector<int>> matrix) {
  vector<vector<int>> cache(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (0 < i) {
        cache[i][j] += cache[i - 1][j];
      }
      cache[i][j] += matrix[i][j];
    }
  }
  int running_sum = numeric_limits<int>::min();
  Result result;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      vector<int> columns(n, 0);
      for (int k = 0; k < n; k++) {
        columns[k] = cache[j][k];
        if (0 < i)
          columns[k] -= cache[i - 1][k];
      }
      int column_sum = 0;
      int start = 0;
      for (int end = 1; end <= n; end++) {
        column_sum += columns[end - 1];
        if (running_sum < column_sum) {
          running_sum = column_sum;
          result = {i, start, j, end - 1};
        }
        if (column_sum < 0) {
          column_sum = 0;
          start = end;
        }
      }
    }
  }
  return result;
}

// int main() {
//   /*
//       {9, -8, 1, 3},
//     {-3, 7, 6, -2},
//     {6, -4, -4, 8},
//     {12, -5, 3, 9}
//   */
//   vector<vector<int>> matrix = {
//     {9, -8, -1, -3},
//     {-3, -7, -6, -2},
//     {6, 4, -4, -8},
//     {12, 5, -3, -9}
//   };
//   Result result = solve(matrix.size(), matrix);
//   cout << result << endl;
//   return 0;
// }
