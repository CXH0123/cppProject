#include <bits/stdc++.h>
using namespace std;
int a[100005], k, x, n;
pair<int, int> find(int l, int r, int k) {
    pair<int, int> t;

    if (l > r)   {
        t.first = -1;
        t.second = -1;
        return t;
    }
    int mid = (l + r) / 2;

    if (a[mid] > k) {
        find(l, mid, k);
    }
    if (a[mid] < k) {
        find(mid + 1, r, k);
    }else{
        int x = mid;
        while (a[mid] == k) {
            mid--;
        }
        while (a[x] == k) {
            x++;
        }
        t.first = mid + 1;
        t.second = x - 1;
        return t;
    }
}


int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {   
        cin >> a[i];
    }
    for (int i = 1; i <= x; i++) {
        cin >> k;
        if(k==a[0]){
            int t=0;
            while(a[t]==k) t++;
            cout<<0<<" "<<t-1<<"\n";
            continue;
        }
        pair<int, int> t = find(0, n - 1, k);
        cout << t.first << " " << t.second << "\n";
    }
    return 0;
}