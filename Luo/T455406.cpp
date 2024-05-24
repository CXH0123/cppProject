#include <bits/stdc++.h>
using namespace std;
vector<int> qt, st;
int main() {
    int q = 0, s = 0;
    int t;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        st.push_back(t);
    }
    for (int i = 0; i < n; i++) {
        cin >> t;
        qt.push_back(t);
    }
    for (int i = 0; i < n; i++) {
        if (st[i] > qt[i]) {
            s++;
        }else if (qt[i] > st[i]) {
            q++;
        }
    }
    cout << s << " " << q << endl;
    if (s > q) {
        cout << "S";
    }else if (q > s) {
        cout << "Q";
    }else {
        cout << "Tie";
    }
}
