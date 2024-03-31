#include<iostream>
using namespace std;
int minn(int a[],int n){
    int min=100000000;
    for(int i=1;i<=n;i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}
int main(){
    int t,n,m,dp[1005][1005]={},x,ans[1005];
    cin>>t>>n>>m;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=n;j++){
            cin>>dp[i][j];
        }
    }
    int min,max;
    for(int i=1;i<=n;i++){
        min=minn(dp[i],t);
        x=m/min;
        m=m%min;
        for(int j=1;j<=t;j++){
            if(dp[i][j]>min){
                m=dp[i][j]*x;
                x=0;
                max=dp[i][j];
            }
            if(dp[i][j]<max){
                x=m/dp[i][j];
                m=m%dp[i][j];
                min=dp[i][j];
            }
            if(j==t) m=x*dp[i][j];
        }
        ans[i]=m;
    }
    max=-1000000000;
    for(int i=1;i<=n;i++){
        if(ans[i]>max) max=ans[i];
    }
    cout<<max;
    return 0;
}