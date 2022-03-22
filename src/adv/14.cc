#include <bits/stdc++.h>
using namespace std;
// 2 3 5 1
// 1 [3] 5 [2]
// 1 2 [5] [3]
// 1 2 3 [[5]]
// pivot 以下のindexを返す
int partition(vector<int> &args, int left, int right, int pivot) {
  while (left <= right) {
    if (pivot < args[left]) {
      swap(args[left], args[right]);
      right--;
    } else if (args[right] < pivot) {
      swap(args[left], args[right]);
      left++;
    } else {
      left++;
      right--;
    }
  }

  cout << pivot << " rtn: " << left - 1 << endl;
  for (auto e : args)
    cout << e << " ";
  cout << endl;

  return left - 1;
}

vector<int> solve(vector<int> args, int k) {
  int n = args.size();
  int p = partition(args, 0, n - 1, args[0]);
  while (true) {
    if (p == k - 1) {
      return vector<int>(args.begin(), args.begin() + p + 1);
    } else if (p < k - 1) {
      p = partition(args, p + 1, n - 1, args[p + 1]);
    } else { // k-1 < p
      p = partition(args, 0, p - 1, args[0]);
    }
    cout << "p: " << p << endl;
  }
  assert(false);
}

// int main() {
//   vector<int> args = {2, 3, 4, 1, 5, 6};
//   vector<int> res = solve(args, 2);
//   for(auto e: res) {
//     cout << e << endl;
//   }
//   return 0;
// }
