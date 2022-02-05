#include "adv7.h"
#include <bits/stdc++.h>
using namespace std;

class UnionFind final {
public:
  UnionFind(int n) : par(n, -1) {}
  int find_root(int v) {
    if (par[v] < 0)
      return v;
    return par[v] = find_root(par[v]);
  }
  int is_same_group(int a, int b) { return find_root(a) == find_root(b); }
  void unite(int a, int b) {
    if (is_same_group(a, b))
      return;
    int root_a = find_root(a), root_b = find_root(b);
    if (par[root_a] < par[root_b]) {
      par[root_a] += par[root_b];
      par[root_b] = root_a;
    } else {
      par[root_b] += par[root_a];
      par[root_a] = root_b;
    }
  }

private:
  vector<int> par;
};

unordered_map<string, int> solve(vector<pair<string, int>> names,
                                 vector<pair<string, string>> synonyms) {

  UnionFind uf(names.size());
  int indice = 0;
  unordered_map<string, int> mp;
  unordered_map<int, string> r_mp;
  for (auto name : names) {
    mp[name.first] = indice++;
    r_mp[mp[name.first]] = name.first;
  }
  for (auto syn : synonyms) {
    uf.unite(mp[syn.first], mp[syn.second]);
  }
  unordered_map<string, int> res;
  for (auto name : names) {
    string root = r_mp[uf.find_root((mp[name.first]))];
    res[root] += name.second;
  }
  return res;
}
