#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[9]={3,4,8,6,7,5,9,1,2};
    int value[9]={0};
    value[0]=num[0];
    value[1]=max(value[0],num[1]);
    for(int i=2;i<9;i++){
        value[i]=max(value[i-1],value[i-2]+num[i]);
    }
    cout<<value[8];
    return 0;
}