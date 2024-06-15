#include <bits/stdc++.h>
using namespace std;
int a[1001][1001],m,n,c,b,x,y;
int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>c>>b>>x>>y;
        for(int i=c;i<=x;i++){
            for(int j=b;j<=y;j++){
                a[i][j]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}