#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;

    cin >> n >> m;
    int a = (n / 1000) % m;
    int b = (n / 100 % 10) % m;
    int c = (n / 10 % 10) % m;
    int d = (n % 10) % m;

    if (a == 0) {
        cout << b << c << d;
    }else if ((a == 0) && (b == 0)) {
        cout << c << d;
    }else if ((a == 0) && (b == 0) && (c == 0)) {
        cout << d;
    }else{
        cout << a << b << c << d;
    }
    return 0;
}
