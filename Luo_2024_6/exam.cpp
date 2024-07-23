#include<bits/stdc++.h>
using namespace std;
int n,m,a[10005];
void dfs(int s,int z){
    if(s==m){
        int sum=0;
        for(int i=0;i<s;i++) sum+=a[i];
        if(sum==n){
            for(int i=0;i<s;i++) cout<<a[i]<<" ";
            cout<<"\n";
        }
        return;
    }
    for(int i=z;i<n;i++){
        a[s]=i;
        dfs(s+1,a[s]);
    }
}
int main(){
    cin>>n>>m;
    dfs(0,1);
    return 0;
}