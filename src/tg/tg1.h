#include <vector>

class UnionFind {
  public:
    UnionFind(int n);
    int find(int node);
    bool same_group(int a, int b);
    void unite(int a, int b);

  private:
    std::vector<int> par;
};

bool solve(std::vector<int> u, std::vector<int> v, int a, int b);