#include <bits/stdc++.h>
using namespace std;

// int main() {
//   vector<int> av = {1, 5, 9};
//   vector<int> bv = {7, 5, 9, 0, 2, 1, 3, 5, 7, 9, 1, 1, 5, 8, 8, 9, 7};
//   unordered_map<int, int> counter;
//   for(int a: av) {
//     counter[a] = 0;
//   }

//   int best_from = 0, best_to = bv.size();
//   for(int from = 0, to = 0;;) {
//     // expand a window
//     bool ok = true;
//     for(pair<int, int> kv: counter) {
//       if(kv.second  == 0)
//         ok = false;
//     }
//     if(ok) {
//       if(to - from < best_to - best_from) {
//         best_from = from;
//         best_to = to;
//       }
//       if(counter.find(bv[from]) != counter.end()) {
//         counter[bv[from]]--;
//       }
//       from++;
//     } else {
//       if(to < bv.size()) {
//          to++;
//          if(counter.find(bv[to-1]) != counter.end()) {
//            counter[bv[to-1]]++;
//          }
//       } else {
//         break;
//       }
//     }
//   }
//   cout << best_from << ", " << best_to - 1 << endl;
//   return 0;
// }
