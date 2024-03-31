#include <bits/stdc++.h>
using namespace std;
int main() {
    int Day, Number, money;

    cin >> Number >> Day >> money;
    int Price[Day][Number], b[1000005];

    for (int n = 0; n < Number; n++) {
        for (int d = 0; d < Day; d++) {
            cin >> Price[d][n];
        }
    }
    for (int d = 0; d < Day - 1; d++) {
        memset(b, 0, sizeof(b));
        for (int n = 0; n < Number; n++) {
            for (int m = Price[d][n]; m <= money; m++) {
                b[m] = max(b[m], b[m - Price[d][n]] + (Price[d + 1][n] - Price[d][n]));
            }
        }

        money += b[money];
    }
    cout << money;
    return 0;
}
