#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;

    cin >> n;
    if ((n % 4 == 0) && (n % 100 != 0) && (n % 3200 != 0)) {
        cout << "Yes";
    }else if ((n % 400 == 0) || (n % 172800 == 0)) {
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}
