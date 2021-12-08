#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int N, int M, int i, int j) {
    for(int k = i; k <= j; k++)
        N = ~(1 << k) & N;
    return N | (M << i);
}