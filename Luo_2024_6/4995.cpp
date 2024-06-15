#include <bits/stdc++.h>
using namespace std;
long long a[301], sum, maxn = -114, imax;
int main() {
    int n, x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (maxn < a[i]) {
            maxn = a[i];
            imax = i;
        }
    }
    sum += maxn * maxn;
    x = maxn;
    a[imax] = -1;
    for (int i = 0; i < n - 1; i++) {
        maxn = -114;
        for (int j = n - 1; j >= 0; j--) {
            if ((abs(x - a[j]) > maxn) && (a[j] != -1)) {
                imax = j;
                maxn = abs(x - a[j]);
            }
        }
        sum += maxn * maxn;
        x = a[imax];
        a[imax] = -1;
    }
    cout << sum;
    return 0;
}
