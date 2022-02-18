#include <bits/stdc++.h>
using namespace std;

class Node final {
public:
  int v;
  Node *left, *right;

  Node(int v);
};
vector<vector<int>> solve(Node *root);
