#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,s=1,sum=0;
    cin>>n;
    while(sum<=n){
        sum+=1.0/s;
        s++;
    }
    cout<<s-1;
    return 0;
}