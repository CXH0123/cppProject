#include <bits/stdc++.h>
using namespace std;
int a[5001];
int main() {
    int n, max = -1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] > max) {
            max = a[i + 1] - a[i];
        }
    }
    cout << max;
    return 0;
}
