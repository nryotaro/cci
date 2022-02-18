#include "tg9.h"

Node::Node(int v) : v(v) {}

void rec_merge(int a, int b, vector<int> &av, vector<int> &bv,
               vector<int> &current, vector<vector<int>> &res) {
  int n_a = av.size(), n_b = bv.size();

  if (a == n_a && b == n_b) {
    res.push_back(vector<int>(current));
    return;
  }
  if (a < n_a) {
    current.push_back(av[a]);
    rec_merge(a + 1, b, av, bv, current, res);
    current.pop_back();
  }
  if (b < n_b) {
    current.push_back(bv[b]);
    rec_merge(a, b + 1, av, bv, current, res);
    current.pop_back();
  }
}

vector<vector<int>> rec(Node *node) {
  if (node == nullptr) {
    return {};
  }
  vector<vector<int>> left = rec(node->left);
  vector<vector<int>> right = rec(node->right);
  if (left.size() == 0 && right.size() == 0) {
    return {{node->v}};
  }
  if (left.size() == 0) {
    vector<vector<int>> res;
    for (auto e : right) {
      vector<int> temp = {node->v};
      temp.insert(temp.end(), e.begin(), e.end());
      res.push_back(temp);
    }
    return res;
  }

  if (right.size() == 0) {
    vector<vector<int>> res;
    for (auto e : left) {
      vector<int> temp = {node->v};
      temp.insert(temp.end(), e.begin(), e.end());
      res.push_back(temp);
    }
    return res;
  }
  vector<vector<int>> res;
  for (int i = 0; i < (int)left.size(); i++) {
    for (int j = 0; j < (int)right.size(); j++) {
      vector<int> current;
      vector<vector<int>> temp_res;
      rec_merge(0, 0, left[i], right[j], current, temp_res);
      for (vector<int> e : temp_res) {
        vector<int> x = {node->v};
        x.insert(x.end(), e.begin(), e.end());
        res.push_back(x);
      }
    }
  }
  return res;
}

vector<vector<int>> solve(Node *root) { return rec(root); }
