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
