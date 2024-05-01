#include<bits/stdc++.h>
using namespace std;
int a[502],b[502],c[503];
int main(){
	string x,y;
	cin>>x>>y;
	for(int i=0;i<x.length();i++) a[i]=x[x.length()-1-i]-'0';
	for(int i=0;i<y.length();i++) b[i]=y[y.length()-1-i]-'0';
	int l=max(x.length(),y.length());
	for(int i=0;i<l;i++){
		c[i]+=a[i]+b[i];
		if(c[i]>=10&&i!=l-1){
			c[i]-=10;
			c[i+1]++;
		}
	}
	for(int i=l-1;i>=0;i--){
		cout<<c[i];
	}
	return 0;
} 
