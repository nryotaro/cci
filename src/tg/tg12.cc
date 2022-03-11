#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
// row quotient column mod
// 0 - 63: e.g. 7, 7
void backtrack(int num_queens, int location, vector<int> queens,
               vector<vector<int>> &res) {
  if (num_queens <= 0 || location == 64) {
    if (static_cast<int>(queens.size()) == 8)
      res.push_back(queens);
    return;
  }
  vector<vector<bool>> board(8, vector<bool>(8, false));
  for (int queen : queens) {
    board[queen / 8][queen % 8] = true;
  }
  board[location / 8][location % 8] = true;
  bool ok = true;
  for (int i = 0; i < 8; i++) {
    int row_count = 0, column_count = 0;
    for (int j = 0; j < 8; j++) {
      if (board[i][j])
        row_count++;
      if (board[j][i])
        column_count++;
    }
    if (2 <= row_count || 2 <= column_count)
      ok = false;
  }
  for (int queen : queens) {
    int row = queen / 8;
    int column = queen % 8;
    int count = 0;
    for (int i = 0; 0 <= row - i && 0 <= column - i; i++) {
      if (board[row - i][column - i])
        count++;
    }
    for (int i = 0; row + 1 + i < 8 && column + 1 + i < 8; i++) {
      if (board[row + 1 + i][column + 1 + i])
        count++;
    }
    if (2 <= count)
      ok = false;
    count = 0;
    for (int i = 0; 0 <= row - i && column + i < 8; i++) {
      if (board[row - i][column + i])
        count++;
    }
    for (int i = 0; row + 1 + i < 8 && 0 <= column - 1 - i; i++) {
      if (board[row + 1 + i][column - 1 - i])
        count++;
    }
    if (2 <= count)
      ok = false;
  }
  if (ok) {
    // cout << "ok " << endl;
    queens.push_back(location);
    backtrack(num_queens - 1, location + 1, queens, res);
    queens.pop_back();
  }
  backtrack(num_queens, location + 1, queens, res);
}

// int main() {
//   vector<vector<int>> res;
//   backtrack(8, 0, {}, res);
//   cout << res.size() << endl;
//   for(vector<int> e: res) {
//     vector<vector<char>> v(8, vector<char>(8, '.'));
//     for(auto a: e) {
//       v[a / 8][a % 8] = '#';
//     }
//     for(int i =0;i<8;i++) {
//       for(int j = 0;j<8;j++) {
//         cout << v[i][j];
//       }
//       cout << endl;
//     }
//     cout << endl;

//   }

//   return 0;
// }
