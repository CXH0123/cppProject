#include <iostream>
using namespace std;
long long catalan(int n) {
    long long a[n + 1] = { 1, 1 };

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            a[i] += a[j] * a[i - j - 1];
        }
    }
    return a[n];
}


int main() {
    int n;

    cin >> n;
    cout << catalan(n);
    return 0;
}
