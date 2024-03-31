#include <bits/stdc++.h>

using namespace std;

int high[10001];
int dp[10001], maxn = 0;

int main() {
    // memset(dp, 1, sizeof(dp));
    int x = 0;

    while (scanf("%d", &high[++x])) {
    }
    for (int i = 1; i <= x; i++) {
        dp[i]=1;
        for (int j = i; j >= 1; j--) {
            if (high[i] <= high[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        if (maxn < dp[i]) {
            maxn = dp[i];
        }
    }
    cout << maxn;
    maxn = 0;
    // memset(dp, 1, sizeof(dp));
    for (int i = 1; i <= x; i++) {
        dp[i]=1;
        for (int j = i; j >= 1; j--) {
            if (high[i] > high[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        if (maxn < dp[i]) {
            maxn = dp[i];
        }
    }
    cout << maxn;
    return 0;
}
