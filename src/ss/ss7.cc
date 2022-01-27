#include "ss7.h"
#include <bits/stdc++.h>
using namespace std;
char cs[268435456];
// 2147483647 /8 -> 268435455.875 + 1
vector<int> solve(vector<int> vec) {

  for (auto e : vec) {
    cs[e / 8] |= cs[e % 8];
  }
  return {};
}
/*
40000000000 // 40億
 5000000000 //

160000000000 // バイト

1000000000
*/

Solver::Solver() {}

void Solver::put(int v) { cs[v / 8] |= 1 << v % 8; }

bool Solver::exist(int v) { return cs[v / 8] & 1 << (v % 8); }
