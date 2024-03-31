#include <iostream>
#include <vector>
using namespace std;
int isTrue(int x, int y, pair<int, int> H) {
    if ((abs(x - H.first) == 1) && (abs(y - H.second) == 2)) {
        return 0;
    }
    if ((abs(x - H.first) == 2) && (abs(y - H.second) == 1)) {
        return 0;
    }
    if ((x == H.first) && (y == H.second)) {
        return 0;
    }
    return 1;
}


int main() {
    pair<int, int> B, H;
    long long dp[22][22] = {};

    cin >> B.first >> B.second;
    cin >> H.first >> H.second;
    for (int i = 0; i < 22; i++) {
        if (!isTrue(0, i, H)) {
            break;
        }
        dp[0][i] = 1;
    }
    for (int i = 0; i < 22; i++) {
        if (!isTrue(i, 0, H)) {
            break;
        }
        dp[i][0] = 1;
    }

    if ((H.first == 0) && (H.second == 0)) {
        cout << 0;
        return 0;
    }
    for (int x = 1; x <= B.first; x++) {
        for (int y = 1; y <= B.second; y++) {
            if (isTrue(x, y, H)) {
                dp[x][y] = dp[x - 1][y] + dp[x][y - 1];
            }
        }
    }
    // for(int i=0;i<=B.first;i++){
    //     for(int j=0;j<=B.second;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout << dp[B.first][B.second];
}
