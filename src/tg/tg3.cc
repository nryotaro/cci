#include "tg3.h"
#include <bits/stdc++.h>

using namespace std;

vector<list<int>> solve(Node *root) {
  queue<pair<Node *, int>> que;
  vector<vector<int>> res_v;
  if (root == nullptr)
    return {};

  que.push({root, 0});

  while (!que.empty()) {
    Node *node = que.front().first;
    int depth = que.front().second;

    que.pop();

    if ((int)res_v.size() == depth)
      res_v.push_back(vector<int>());

    res_v[depth].push_back(node->value);
    if (node->left != nullptr)
      que.push({node->left, depth + 1});
    if (node->right != nullptr)
      que.push({node->right, depth + 1});
  }
  vector<list<int>> res(res_v.size());
  for(int i=0;i<(int) res.size();i++) {
    res[i] = list<int>(res_v[i].begin(), res_v[i].end());
  }
  return res;
}
