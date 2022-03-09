#include <bits/stdc++.h>
using namespace std;

int **solve(int row, int column) {
  int **res = (int **)malloc(sizeof(int) * row * column + sizeof(int *) * row);
  for (int i = 0; i < row; i++) {
    res[i] = (int *)res + sizeof(int *) * row + sizeof(int) * i;
  }
  return res;
}

// int main() {
//   int** a = solve(2, 3);
//   int c = 0;
//   for(int i = 0;i<2;i++) {
//     for(int j = 0;j<3;j++) {
//       a[i][j] = c++;
//     }
//   }
//   for(int i = 0;i<2;i++) {
//     for(int j = 0;j<3;j++) {
//       cout << a[i][j] << endl;
//     }
//   }
//   return 0;
// }
