#include <bits/stdc++.h>
using namespace std;
int a[2000], b[2000];
int c[2001];
int main() {
    int s;
    string x, y;

    cin >> s >> x >> y;
    for (int i = 0; i < x.length(); i++) {
        if (x[x.length() - 1 - i] >= 65) {
            x[x.length() - 1 - i] -= 34;
        }
        a[i] = x[x.length() - 1 - i] - '0';
    }
    for (int i = 0; i < y.length(); i++) {
        if (y[y.length() - 1 - i] >= 65) {
            y[y.length() - 1 - i] -= 34;
        }
        b[i] = y[y.length() - 1 - i] - '0';
    }
    int l = max(x.length(), y.length());

    for (int i = 0; i < l; i++) {
        c[i] += b[i] + a[i];
        if (c[i] >= s) {
            c[i + 1]++;
            c[i] -= s;
        }
    }
    while (c[l] == 0) {
        l--;
    }
    for (int i = l; i >= 0; i--) {
        if (c[i] > 10) {
            c[i] -= 9;
            cout << char('A' + c[i]);
        }else{
            cout << c[i];
        }
    }
    return 0;
}
