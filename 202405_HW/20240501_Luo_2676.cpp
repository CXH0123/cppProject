#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int a[200002];
int main(){
    int n,h;
    cin>>n>>h;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp);
    int i=0,sum=0;
    while(sum<h){
        sum+=a[i];
        i++;
    }
    cout<<i;
}