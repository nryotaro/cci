#include "inter4.h"
#include <bits/stdc++.h>
using namespace std;

Winner solve(vector<vector<int>> grid) {
  int n = grid.size();

  for (int i = 0; i < n; i++) {
    int o_row = 0, x_row = 0, o_col = 0, x_col = 0;
    for (int j = 0; j < n; j++) {
      switch (grid[i][j]) {
      case 'o':
        o_row++;
        break;
      case 'x':
        x_row++;
        break;
      }
      switch (grid[j][i]) {
      case 'o':
        o_col++;
        break;
      case 'x':
        x_col++;
        break;
      }
    }
    if (o_row == n || o_col == n)
      return Winner::O;
    else if (x_row == n || x_col == n)
      return Winner::X;
  }

  int o_cross = 0, x_cross = 0, o_rev_cross = 0, x_rev_cross = 0;
  for (int i = 0; i < n; i++) {
    switch (grid[i][i]) {
    case 'o':
      o_cross++;
      break;
    case 'x':
      x_cross++;
      break;
    }
    switch (grid[i][n - 1 - i]) {
    case 'o':
      o_rev_cross++;
      break;
    case 'x':
      x_rev_cross++;
      break;
    }
  }
  if (o_cross == n || o_rev_cross == n)
    return Winner::O;
  else if (x_cross == n || x_rev_cross == n)
    return Winner::X;
  return Winner::None;
}

class Checker final {
public:
  Checker(int row, int column, int delta_row, int delta_column)
      : row(row), column(column), delta_row(delta_row),
        delta_column(delta_column){

        };

  Winner solve(vector<vector<int>> &grid) {
    int row_i = row, col_i = column, n = grid.size();
    char c = grid[row_i][col_i];
    for (int i = 1; i < n; i++) {
      row_i += delta_row;
      col_i += delta_column;
      if (c != grid[row_i][col_i])
        return Winner::None;
    }
    if (c == 'o')
      return Winner::O;
    else if (c == 'x')
      return Winner::X;
    return Winner::None;
  }

private:
  int row, column, delta_row, delta_column;
};

Winner solve2(std::vector<std::vector<int>> grid) {
  int n = grid.size();
  for (int i = 0; i < n; i++) {
    Checker checker(i, 0, 0, 1);
    Winner winner = checker.solve(grid);
    if (winner != Winner::None)
      return winner;
  }
  for (int i = 0; i < n; i++) {
    Checker checker(0, i, 1, 0);
    Winner winner = checker.solve(grid);
    if (winner != Winner::None)
      return winner;
  }
  Checker checker(0, 0, 1, 1);
  Winner winner = checker.solve(grid);
  if (winner != Winner::None)
    return winner;
  checker = Checker(0, n - 1, 1, -1);
  winner = checker.solve(grid);
  return winner;
}
