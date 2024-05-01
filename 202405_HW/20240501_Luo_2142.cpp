#include<bits/stdc++.h>
using namespace std;
int a[10087],b[10087],c[10088];
int main(){
    string x,y;
    cin>>x>>y;
    if(x.length()<y.length()){
        swap(x,y);
        cout<<"-";
    }else if(x.length()==y.length()){
        if(x<y){
            swap(x,y);
            cout<<"-";
        }
    }
    if(x==y){
        cout<<0;
        return 0;
    }
    for(int i=0;i<x.length();i++) a[i]=x[x.length()-1-i]-'0';
    for(int i=0;i<y.length();i++) b[i]=y[y.length()-1-i]-'0';
    int l=max(x.length(),y.length());
    for(int i=0;i<l;i++){
        if(a[i]<b[i]){
            a[i+1]--;
            a[i]+=10;
        }
        c[i]+=a[i]-b[i];
    }
    while(c[l-1]==0||l==1) l--;
    for(int i=l-1;i>=0;i--){
        cout<<c[i];
    }
    return 0;
}