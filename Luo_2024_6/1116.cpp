#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
    int n,s=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                s++;
            }
        }
    }
    cout<<s;
    return 0;
}           