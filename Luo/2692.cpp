#include <bits/stdc++.h>
using namespace std;
int a[5005][5005];
int main() {
    int n, m, x, y, s1, s2, ans = 0;

    cin >> n >> m >> x >> y;
    for (int i = 0; i < x; i++) {
        cin >> s1 >> s2;
        for (int j = s1; j <= s2; j++) {
            for (int k = 1; k <= m; k++) {
                a[j][k] = 1;
            }
        }
    }
    for (int i = 0; i < y; i++) {
        cin >> s1 >> s2;
        for (int j = s1; j <= s2; j++) {
            for (int k = 1; k <= n; k++) {
                a[k][j] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
