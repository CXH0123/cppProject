#include<bits/stdc++.h>
using namespace std;
void abc(int n){
    if(n<1) return;
    cout<<n<<" ";
    abc(n-1);
}
int main(){
    abc(1000);
    return 0;
}