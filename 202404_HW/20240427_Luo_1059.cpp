#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num;
    priority_queue<int,vector<int>,greater<int> > ans;
    int x,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        num.push_back(x);
    }
    for(int i=0;i<num.size();i++){
        for(int j=i+1;j<num.size();j++){
            if(num[i]==num[j]){
                num[j]=114514;
            }
        }
    }
    for(int i=0;i<num.size();i++){
        if(num[i]!=114514){
            ans.push(num[i]);  
        }else n--;
    }
    cout<<n<<endl;
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    return 0;
}