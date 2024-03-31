#include <bits/stdc++.h>
#define INF    0x7f7f7f7f
using namespace std;
string s;
int dp[50][150000], num[50][50];
int sum, n, l;
int main() {
    cin >> s >> n;
    l = s.length();
    memset(dp, 127, sizeof(dp));
    for(int i=1;i<=l;i++){
        for(int j=1;j<=i;j++){
            if(num[j][i-1]>n){
                num[j][i]=INF;
            }else{
                num[j][i]=num[j][i-1]*10+s[i-1]-48;
            }
            printf("%d ",num[j][i]);
        }
        cout<<endl;
    }
}
