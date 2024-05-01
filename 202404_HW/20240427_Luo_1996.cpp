#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> a, b, c;
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        a.push(i + 1);
    }
    while (n != 0) {
        int t = m, s = 0;
        if (a.size() < t) {
            t -= a.size();
        }
        int l = a.size();
        for (int i = 0; i < l; i++) {
            s++;
            if (s == t) {
                cout << a.front() << " ";
                a.pop();
                n--;
            }else{
                b.push(a.front());
                a.pop();
            }
        }
        swap(a, b);
        while (!b.empty()) {
            b.pop();
        }
        swap(a, c);
        for (int i = 0; i <= t; i++) {
            a.pop();
        }
        for (int i = t + 1; i < l; i++) {
            b.push(a.front());
            a.pop();
        }
        for (int i = 0; i <= t; i++) {
            b.push(c.front());
            c.pop();
        }
        swap(a, b);
    }
    return 0;
}
