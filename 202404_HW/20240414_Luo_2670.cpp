#include <iostream>
using namespace std;
char num(char a[1000][1000], char sum, int i, int j) {
    if (a[i - 1][j - 1] == '*') {
        sum++;
    }
    if (a[i - 1][j] == '*') {
        sum++;
    }
    if (a[i - 1][j + 1] == '*') {
        sum++;
    }
    if (a[i][j - 1] == '*') {
        sum++;
    }
    if (a[i][j] == '*') {
        sum++;
    }
    if (a[i][j + 1] == '*') {
        sum++;
    }
    if (a[i + 1][j - 1] == '*') {
        sum++;
    }
    if (a[i + 1][j] == '*') {
        sum++;
    }
    if (a[i + 1][j + 1] == '*') {
        sum++;
    }
    return sum;
}


char a[1000][1000];
int main() {
    int n, m;

    cin >> n >> m;

    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            a[i][j] = '&';
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] != '*') {
                a[i][j] = num(a, '0', i, j);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] != '*') {
                cout << int(a[i][j] - 48);
            }else{
                cout << a[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
