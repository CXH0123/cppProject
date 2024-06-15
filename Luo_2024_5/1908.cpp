#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N],sum=0;
void merge(int l,int r){
    if(l>=r) return;
    int mid=(l+r)/2,f=1;
    for(int i=l;i<mid;i++) if(a[i]<a[i+1]) f=0;
    if(f) sum++;
    f=1;
    for(int i=mid+1;i<r;i++) if(a[i]<a[i+1]) f=0;
    if(f) sum++;
    merge(l,mid);
    merge(mid+1,r);
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int f=1;
    for(int i=1;i<n;i++) if(a[i]<a[i+1]) f=0;
    if(f) sum++;
    merge(1,n);
    cout<<sum;
    return 0;
}