#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) {
    return a < b;
}


int main() {
    int n, m;

    cin >> m >> n;
    int a[m];

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a, a + m, cmp);
    cout << a[n];
    return 0;
}
