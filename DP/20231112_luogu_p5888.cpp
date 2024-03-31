#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n, k;

    cin >> n >> m >> k;
    int rule[502][502];
    long long dp[2][502];

    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        rule[x - 1][y - 1] = 1;
    }

    dp[0][0] = 1;
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            long long sum = 0;
            for (int p = 0; p < n; p++) {
                if (p == j) {
                    continue;
                }
                if (rule[p][j]) {
                    continue;
                }
                sum += dp[0][p];
                sum %= 998244353;
            }
            dp[1][j] = sum;
        }
        for (int j = 0; j < n; j++) {
            dp[0][j] = dp[1][j];
        }
    }
    cout << dp[0][0];
}
