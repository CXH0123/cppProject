#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 500;
int f[N][N], s[N][N], n, m, q, a, b, x, y, maxn = INT_MIN;
int main() {
    cin >> m >> n >> q;
    for (int i = 101; i <= n + 100; i++) {
        for (int j = 101; j <= m + 100; j++) {
            cin >> f[i][j];
            s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + f[i][j];
        }
    }
    for (int i = 101; i <= n - q + 100; i++) {
        for (int j = 101; j <= m - q + 100; j++) {
            if (s[i][j] - s[i - q][j] - s[i][j - q] + s[i + q][j + q] > maxn) {
                maxn = s[i][j] - s[i - q][j] - s[i][j - q] + s[i + q][j + q];
            }
        }
    }
    for (int i = 101; i <= n - q + 100; i++) {
        for (int j = 101; j <= n - q + 100; j++) {
            if (s[i][j] - s[i - q][j] - s[i][j - q] + s[i + q][j + q] == maxn) {
                cout << j - 100 << " " << i - 100;
                return 0;
            }
        }   
    }
    return 0;
}
