#include <bits/stdc++.h>
using namespace std;

/**
 * Return {row, column}.
 * Return {-1, -1} if v is not in matrix.;
 */
pair<int, int> solve(vector<vector<int>> &matrix, int v) {
  int h = matrix.size();
  int lb = -1, ub = h;
  while (ub - lb > 1) {
    int mid = (ub + lb) / 2;
    if (v < matrix[mid][0])
      ub = mid;
    else
      lb = mid;
  }
  pair<int, int> not_found = {-1, -1};
  if (lb < 0 || h <= lb)
    return not_found;
  int w = matrix[0].size();
  int row = lb;
  lb = -1, ub = w;
  while (ub - lb > 1) {
    int mid = (lb + ub) / 2;
    if (v <= matrix[row][mid])
      ub = mid;
    else
      lb = mid;
  }
  if (w <= ub || ub < 0)
    return not_found;
  return {row, ub};
}
