#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;

    cin >> n >> m;
    long long arr[n + 2][m + 1] = {}, dp[n + 2][m + 1][2] = {};
    memset(dp,128,sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    dp[1][1][0] = arr[1][1];
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            if ((i == 1) && (j == 1)) {
                continue;
            }
            dp[i][j][0] = max(dp[i - 1][j][0], max(dp[i][j - 1][0], dp[i][j - 1][1]));
            dp[i][j][0] += arr[i][j];
        }
        for (int i = n; i >= 1; i--) {
            dp[i][j][1] = max(dp[i + 1][j][1], max(dp[i][j - 1][0], dp[i][j - 1][1]));
            dp[i][j][1] += arr[i][j];
        }
    }
    cout << dp[n][m][0];
    return 0;
}
