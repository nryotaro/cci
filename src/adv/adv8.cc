#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &ht, vector<int> &wt) {
  int n = ht.size();
  vector<pair<int, int>> ht_index(n);
  for (int i = 0; i < n; i++) {
    ht_index[i] = {ht[i], i};
  }
  sort(ht_index.begin(), ht_index.end());
  vector<int> dp(n, 1);
  for (int i = n - 2; i >= 0; i--) {
    int height = ht_index[i].first;
    int index = ht_index[i].second;
    int weight = wt[index];
    for (int j = i + 1; j < n; j++) {
      if (height < ht_index[j].first && weight < wt[ht_index[j].second]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }
  return *max_element(dp.begin(), dp.end());
}
