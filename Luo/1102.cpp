#include <bits/stdc++.h>
using namespace std;
bool cmp(int x, int y) {
    return x > y;
}


int main() {
    int n, c, t, sum = 0;
    vector<int> a;

    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] - a[j] == c) {
                sum++;break;
            }
        }
    }
    cout << sum;
    return 0;
}