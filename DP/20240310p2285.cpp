#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int X[m],Y[m],T[m];
    for(int i=0;i<m;i++){
        cin>>T[i]>>X[i]>>Y[i];
    }
    int dp[m],maxn=0;
    for(int i=0;i<m;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(abs(X[i]-X[j])+abs(Y[i]-Y[j])<=T[i]-T[j]){
                if(dp[j]+1>=dp[i]) dp[i]=dp[j]+1;
            }
        }
        maxn=max(maxn,dp[i]);
    }
    cout<<maxn;
    return 0;
}