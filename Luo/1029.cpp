#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;

    cin >> x >> y;
    int sum = 0, f = x * y;

    for (int i = x; i <= y ; i++) {
        if ((f % i == 0) && (f / i <= y) && (f / i >= x)) {
            if ((__gcd(i, f / i) == x) && (i * (f / i) / __gcd(i, f / i) == y)) {
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}
