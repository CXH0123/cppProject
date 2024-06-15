#include <bits/stdc++.h>
using namespace std;
int a[101];
int main() {
    int n, s = 0, ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    s /= n;
    for (int i = 0; i < n; i++) {
        if (a[i] < s) {
            ans++;
            a[i + 1] -= (s - a[i]);
            a[i] = s;
        }else if (a[i] > s) {
            ans++;
            a[i + 1] += (a[i] - s);
            a[i] = s;
        }
    }
    cout << ans;
    return 0;
}
