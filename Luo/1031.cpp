#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int a[N];
bool isRight(int n, int s) {
    for (int i = 0; i < n; i++) {
        if (a[i] != s) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int n, s = 0, ans = 0;

    cin >> n;
    int t = n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    s /= n;
    while (!isRight(n, s)) {
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (a[i] > s) {
                    ans++;
                    a[i + 1] += (a[i] - s);
                    a[i] -= (a[i] - s);
                }
            }else if (i == n - 1) {
                if (a[i] > s) {
                    ans++;
                    a[i - 1] += (a[i] - s);
                    a[i] -= (a[i] - s);
                }
            }else if (a[i] > s) {
                ans++;
                if (a[i - 1] < a[i + 1]) {
                    if (a[i] - s > a[i - 1] - s) {
                        a[i] -= (a[i - 1] - s);
                        a[i - 1] = s;
                    }else{
                        a[i - 1] += (a[i] - s);
                        a[i] = s;
                    }
                    if (a[i]!=s&&a[i] - s > a[i + 1] - s) {
                        a[i] -= (a[i + 1] - s);
                        a[i + 1] = s;
                    }else{
                        a[i + 1] += (a[i] - s);
                        a[i] = s;
                    }
                }else{
                    if (a[i] - s > a[i + 1] - s) {
                        a[i] -= (a[i + 1] - s);
                        a[i + 1] = s;
                    }else{
                        a[i + 1] += (a[i] - s);
                        a[i] = s;
                    }
                    if (a[i]!=s&&a[i] - s > a[i - 1] - s) {
                        a[i] -= (a[i - 1] - s);
                        a[i - 1] = s;
                    }else{
                        a[i - 1] += (a[i] - s);
                        a[i] = s;
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}