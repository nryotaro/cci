#include "tg1.h"
#include <bits/stdc++.h>
using namespace std;

// class UnionFind {
//   public:
//     UnionFind(int n) : par(n, -1) {}
//     int find(int node) {
//         if(par[node] < 0)
//             return node;
//         return par[node] = find(par[node]);
//     }
//     bool same_group(int a, int b) { return find(a) == find(b); }
//     void unite(int a, int b) {
//         if(same_group(a, b))
//             return;
//         int root_a = find(a), root_b = find(b);
//         if(par[root_a] < par[root_b]) {
//             par[root_a] += par[root_b];
//             par[root_b] = root_a;
//         } else {
//             par[root_b] += par[root_a];
//             par[root_a] = root_b;
//         }
//     }

//   private:
//     vector<int> par;
// };
UnionFind::UnionFind(int n) : par(n, -1) {}
int UnionFind::find(int node) {
    if(par[node] < 0)
        return node;
    return par[node] = find(par[node]);
}

bool UnionFind::same_group(int a, int b) { return find(a) == find(b); }

void UnionFind::unite(int a, int b) {
    if(same_group(a, b))
        return;
    int root_a = find(a), root_b = find(b);
    if(par[root_a] < par[root_b]) {
        par[root_a] += par[root_b];
        par[root_b] = root_a;
    } else {
        par[root_b] += par[root_a];
        par[root_a] = root_b;
    }
}

bool solve(vector<int> u, vector<int> v, int a, int b) {
    int mx = -1;
    for(int i = 0; i < (int)u.size(); i++) {
        mx = max(mx, u[i]);
        mx = max(mx, v[i]);
    }
    UnionFind uf(mx);
    for(int i = 0; i < (int)u.size(); i++) {
        uf.unite(--u[i], --v[i]);
    }
    return uf.same_group(a - 1, b - 1);
}