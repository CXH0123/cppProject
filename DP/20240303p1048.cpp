#include <bits/stdc++.h>
using namespace std;
int main() {
    int time, n;

    cin >> time >> n;
    int dp[time + 2][n + 2] ;
    int arr[n + 3][2] ;
    memset(dp,0,sizeof(dp));

    for (int i = 1; i <= n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int t = 1; t <= time; t++) {
        for (int i = 1; i <= n; i++) {
            if (t >= arr[i][0]) {
                dp[t][i] = max(
                    dp[t][i - 1],
                    dp[t - arr[i][0]][i - 1] + arr[i][1]);
                // cout << t << " ";
            }else{
                dp[t][i]=dp[t][i-1];
            }
        }
    }

    // for (int t = 1; t <= time; t++) {
    //     cout << t << ' ';
    //     for (int j = 1; j <= n; j++) {
    //         cout << dp[t][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << dp[time][n];
}
