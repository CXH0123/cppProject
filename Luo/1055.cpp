#include <bits/stdc++.h>
using namespace std;
int main() {
    string x, ans;
    long long sum = 0;

    cin >> x;
    vector<int> a;

    for (int i = 0; i < 12; i++) {
        if (x[i] != '-') {
            a.push_back(x[i] - '0');
        }
    }
    for (int i = 0; i < a.size(); i++) {
        sum += a[i] * (i + 1);
    }
    sum %= 11;
    if (sum == x[12] - '0') {
        cout << "Right";
    }   else if ((sum == 10) && (x[12] == 'X')) {
        cout << "Right";
    }else {
        for (int i = 0; i < 12; i++) {
            cout << x[i];
        }
        if (sum == 10) {
            cout << "X";
        }else{
            cout << sum;
        }
    }
    return 0;
}
