#include <iostream>
using namespace std;
int main() {
    int x = 0, n, a[1000];
    bool f = 0;

    cin >> n;
    if (n == 0) {
        cout << n;
        return 0;
    }
    if (n < 0) {
        cout << "-";
        n = abs(n);
    }
    while (n != 0) {
        a[x] = n % 10;
        x++;
        n /= 10;
    }
    for (int i = 0; i < x; i++) {
        if ((a[i] != 0) || f) {
            cout << a[i];
            f = 1;
        }
    }
    return 0;
}
