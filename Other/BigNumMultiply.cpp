#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string a, b;
    int n;

    cin >> a >> b;
    int l = max(a.size(), b.size());
    int x[1005] = {}, y[1005] = {};
    int ans[3005] = {};
    int l1 = a.size(), l2 = a.size();

    for (int j = 0; j < l1; j++) {
        x[l1 - j - 1] = a[j] - '0';
    }
    for (int j = 0; j < l2; j++) {
        y[l2 - j - 1] = b[j] - '0';
    }
    int i=0;
    for(int i=0;i<l1;i++){
        int jinwei=0;
        for(int j=0;j<l2;j++){
            ans[i+j]=x[i]*y[j]+jinwei+ans[i+j];
            jinwei=ans[i+j]/10;
            ans[i+j]%=10;
        }
        ans[i+l2]=jinwei;
    }
    l=l1+l2;
    while(ans[l]==0&&l>1){
        l--;
    }
    for(int i=l;i>=0;i--){
        cout<<ans[i];
    }
    return 0;
}
