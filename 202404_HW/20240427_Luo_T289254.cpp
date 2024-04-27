#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> arr;
    vector<int> ans;
    int num[10005] = {}, n, m;

    cin >> n;
    string t;

    for (int i = 0; i < n; i++) {
        cin >> t;
        arr.push_back(t);
        cin >> num[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> t;
        int f;
        for (int j = 0; j < arr.size(); j++) {
            if (t == arr[j]) {
                f = j;
                break;
            }
        }
        ans.push_back(num[f]);
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
