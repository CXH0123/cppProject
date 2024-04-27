#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> a, b;
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
        for (int i = 0; i < a.size(); i++) {
            s++;
            if (s == t) {
                cout << a.front() << " ";
                a.pop();
                n--;
            }else  {
                b.push(a.front());
                a.pop();
            }
        }
        swap(a, b);
    }
    return 0;
}
