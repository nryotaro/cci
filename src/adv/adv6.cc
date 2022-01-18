#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

ll solve(ll n) {
    string n_s = to_string(n);
    int len = n_s.size();
    vector<vector<vector<int>>> dp(
        len + 1, vector<vector<int>>(2, vector<int>(len + 1, 0)));
    // dp[i][k][j] i桁までにj個の2がある数字の数
    dp[0][0][0] = 1;
    // dp[0][1][0] = 1;
    rep(i, len) {
        // まだ確定していないとき
        int digit = n_s[i] - '0';
        // 0 -> 0
        rep(j, len) {
            if(digit == 2) {
                dp[i + 1][0][j + 1] += dp[i][0][j];
            } else {
                dp[i + 1][0][j] += dp[i][0][j];
            }
        }
        // 0 -> 1
        rep(j, len) {
            if(digit < 2) {
                dp[i + 1][1][j] += dp[i][0][j] * (digit + 1);
            } else if(digit == 2) {
                dp[i + 1][1][j] += dp[i][0][j] * 2;
            } else { // 2 < digit
                dp[i + 1][1][j + 1] += dp[i][0][j];
                // digit == 3なら0, 1, 3がある
                dp[i + 1][1][j] += dp[i][0][j] * max(0, (digit-1));
            }
        }
        // 1 -> 1
        rep(j, len) {
            dp[i + 1][1][j] += dp[i][1][j] * 9;
            dp[i + 1][1][j + 1] += dp[i][1][j];
        }
    }
    int res = 0;
    rep(i, len + 1) {
        res += dp[len][0][i] * i;
        res += dp[len][1][i] * i;
    }
    return res;
}
