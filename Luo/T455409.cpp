#include <bits/stdc++.h>
using namespace std;
int a[3001][3001];
int main() {
    int n, max = INT_MIN, sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        if (max < sum) {
            max = sum;
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        if (max < sum) {
            max = sum;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        int ti = i;
        while (ti != n) {
            sum += a[ti][ti];
            ti++;
        }
        if (max < sum) {
            max = sum;
        }
    }
    for (int i = 1; i < n; i++) {
        int ti = i;
        while (ti != n) {
            sum += a[ti][ti];
            ti++;
        }
        if (max < sum) {
            max = sum;
        }
    }
    cout << max;
    return 0;
}
