#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) {
    return a < b;
}


int main() {
    int n, m;

    cin >> n >> m;
    int a[m];

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a, a + m, cmp);
    for (int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
