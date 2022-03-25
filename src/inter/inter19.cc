#include <bits/stdc++.h>
using namespace std;

int count_water(vector<vector<int>> &grid, int r, int c,
                vector<vector<bool>> &visited) {
  int h = grid.size();
  int w = grid[0].size();
  if (!(0 <= r && r < h && 0 <= c && c < w)) {
    return 0;
  }
  if (visited[r][c])
    return 0;

  visited[r][c] = true;
  if (grid[r][c] != 0) {
    return 0;
  }

  int result = 1 + count_water(grid, r, c + 1, visited) +
               count_water(grid, r + 1, c - 1, visited) +
               count_water(grid, r + 1, c, visited) +
               count_water(grid, r + 1, c + 1, visited);
  return result;
}

vector<int> solve(vector<vector<int>> &grid) {
  vector<int> result;
  int h = grid.size();
  int w = grid[0].size();
  vector<vector<bool>> visited(h, vector<bool>(w, false));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      int num_water = count_water(grid, i, j, visited);
      if (0 < num_water)
        result.push_back(num_water);
    }
  }
  return result;
}

// int main() {
//   vector<vector<int>> grid = {
//     {0, 2, 1, 0},
//     {0, 1, 0, 1},
//     {1, 1, 0, 1},
//     {0, 1, 0, 1}
//   };
//   vector<int> result = solve(grid);
//   for(int num: result)
//     cout << num << endl;
//   return 0;
// }
