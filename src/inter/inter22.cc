#include <bits/stdc++.h>
using namespace std;

void printKMoves(int k) {
  // false => white, true => black
  unordered_map<int, unordered_map<int, bool>> grid;
  int row = 0, col = 0;
  int drow[] = {-1, 0, 1, 0};
  int dcol[] = {0, 1, 0, -1};
  int direction = 1;
  for (int i = 0; i < k; i++) {
    if (grid[row][col]) {
      direction = (direction - 1 + 4) % 4;
    } else {
      direction = (direction + 1) % 4;
    }
    grid[row][col] = !grid[row][col];
    row += drow[direction];
    col += dcol[direction];
  }
  int top = 10000, left = 10000, bottom = -10000, right = -10000;
  for (auto row_to_col_to_color : grid) {
    int row_e = row_to_col_to_color.first;
    for (auto col_to_color : row_to_col_to_color.second) {
      int col_e = col_to_color.first;
      top = min(row_e, top);
      bottom = max(row_e, bottom);
      left = min(col_e, left);
      right = max(col_e, right);
    }
  }
  for (int i = top; i <= bottom; i++) {
    for (int j = left; j <= right; j++) {
      if (grid[i][j])
        cout << "x";
      else
        cout << "o";
    }
    cout << endl;
  }
}

// int main() {
//   printKMoves(3);
//   return 0;
// }
