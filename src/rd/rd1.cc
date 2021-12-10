#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 3; j >= 1; j--) {
            if(i - j >= 0)
                dp[i] += dp[i - j];
        }
    }
    return dp[n];
}