#include <bits/stdc++.h>
using namespace std;
int main(){
    int l=0,r,n;
    cin>>n;
    r=n;
    while(l<r){
        int mid=l+r>>1;
        int sum=mid,s=mid,t;
        while(sum>2){
            t=sum/3;
            s+=t;
            sum-=t*3;
            sum+=t;
        }
        if(s>=n) r=mid;
        else l=mid+1;
    }
    cout<<l;
}