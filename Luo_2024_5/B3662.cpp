#include <bits/stdc++.h>
using namespace std;
int city[1005][1005];
int main() {
    int n, m, t, a, b, c, d, sum = 0;
    vector<int> x, y;

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> city[i][j];
        }
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d;
        swap(city[a][b], city[c][d]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if ((city[i][j] > city[i + 1][j]) && (city[i][j] > city[i - 1][j]) &&
                (city[i][j] > city[i][j + 1]) && (city[i][j] > city[i][j - 1])) {
                sum++;
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    cout << sum << endl;
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " " << y[i] << endl;
    }
    return 0;
}
