#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int n,l;
int s[N];
int main(){
    cin>>n;
    s[N-1]=1;
    if(n==0){
        cout<<0;
        return 0;
    }
    for(int _=0;_<n;_++){
        for(int i=N-1;s[i]!=0;i--){
            s[i]*=2;
            s[i-1]+=s[i]/10;
            s[i]%=10;
        }
    }
    int i=N-1;
    while(s[i]!=0) i--;
    i++;
    for(int j=N-1;j>=i;j--) cout<<s[j]; 
    return 0;
}