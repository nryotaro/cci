#include <bits/stdc++.h>
using namespace std;

struct Square {
  int upper_left_row, upper_left_column, length;
};
Square solve(vector<string> &board) {
  int n = board.size();
  vector<vector<pair<int, int>>> cache(n, vector<pair<int, int>>(n, {0, 0}));
  for (int i = n - 1; 0 <= i; i--) {
    for (int j = n - 1; 0 <= j; j--) {
      int row = 0;
      int column = 0;
      if (board[i][j] == '#') {
        row++;
        column++;
      }
      if (i < n - 1)
        row += cache[i + 1][j].first;
      if (j < n - 1)
        column += cache[i][j + 1].second;
      cache[i][j] = {row, column};
    }
  }
  for (int edge = n; 1 <= edge; edge--) {
    for (int i = 0; i + edge - 1 < n; i++) {
      for (int j = 0; j + edge - 1 < n; j++) {
        if (edge <= cache[i][j].first && edge <= cache[i][j].second) {
          return {i, j, edge};
        }
      }
    }
  }
}

// int main() {
//   vector<string> board = {
//     "...##",
//     "...##",
//     ".###.",
//     ".#.#.",
//     ".###."
//   };
//   Square found = solve(board);
//   cout << found.upper_left_row << endl;
//   cout << found.upper_left_column << endl;
//   cout << found.length << endl;
// }
