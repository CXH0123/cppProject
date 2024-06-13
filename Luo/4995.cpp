#include <bits/stdc++.h>
using namespace std;
int a[301], sum;
int main() {
    int n, x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    sum += a[n - 1] * a[n - 1];
    x = a[n - 1];
    a[n - 1] = -1;
    for (int i = 0; i < n; i++) {
        int maxn = -114, index;

        for (int j = n - 2; j >= 0; j--) {
            if ((abs(x - a[j]) > maxn) && (a[j] != -1)) {
                index = i;
                maxn = abs(x - a[j]);
            }
        }
        sum += maxn * maxn;
        x = a[index];
        a[index] = -1;
    }
    cout << sum;
    return 0;
}
