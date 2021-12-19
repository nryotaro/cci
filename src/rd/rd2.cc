#include "rd2.h"
#include <bits/stdc++.h>
#include <optional>
using namespace std;

std::optional<string> solve(vector<string> &grid) {
    int r = grid.size(), c = grid[0].size(), INF = 1 << 30;
    vector<vector<int>> cost(r, vector<int>(c, INF));
    cost[0][0] = 0;
    queue<Point> queue;
    queue.push({0, 0, 0});
    while(!queue.empty()) {
        Point p = queue.front();
        queue.pop();
        if(cost[p.r][p.c] < p.cost)
            continue;
        if(p.r < r - 1 && grid[p.r + 1][p.c] == '.' &&
           p.cost + 1 < cost[p.r + 1][p.c]) {
            cost[p.r + 1][p.c] = p.cost + 1;
            queue.push({p.r + 1, p.c, p.cost + 1});
        }
        if(p.c < c - 1 && grid[p.r][p.c + 1] == '.' &&
           p.cost + 1 < cost[p.r][p.c + 1]) {
            cost[p.r][p.c + 1] = p.cost + 1;
            queue.push({p.r, p.c + 1, p.cost + 1});
        }
    }
    if(cost[r - 1][c - 1] == INF)
        return nullopt;
    string res;
    int p_r = r - 1, p_c = c - 1;
    while(p_r > 0 || p_c > 0) {
        if(p_r == 0) {
            res.push_back('r');
            p_c--;
        } else {
            if(p_c == 0 || cost[p_r][p_c] == 1 + cost[p_r - 1][p_c]) {
                res.push_back('d');
                p_r--;
            } else {
                res.push_back('r');
                p_c--;
            }
        }
    }
    reverse(res.begin(), res.end());
    return res;
}