#include <bits/stdc++.h>
using namespace std;
int isprime(int x) {
    if (x == 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int n, t, i = 2;

    cin >> n;
    for (int _ = 0; _ < n; _++) {
        cin >> t;
        if (isprime(t)) {
            cout << t << endl;
            continue;
        }
        while (t != 1) {
            if (t % i == 0) {
                t /= i;
                i = 2;
                cout << i << " ";
            }else  {
                i++;
            }
        }
        cout << endl;
    }
}
