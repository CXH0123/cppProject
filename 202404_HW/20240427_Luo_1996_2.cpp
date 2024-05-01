#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    vector<int> a;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        sum+=m;
        for(int j=0;j<a.size();j++){
            if(a[i]<=sum) sum++;
        }
        if(sum>n) sum-=n;
        cout<<sum<<" ";
        a.push_back(sum);
    }
    return 0;
}