/*
最大子列和
*/
#include<bits/stdc++.h>
using namespace std;
int fun3_rec(int arr[],int left,int right){
	int ls,rs;
	int middle=(left+right)/2;
	if(left==right){
		if(arr[left]<0) return 0;
		return arr[left];
	}
	ls=fun3_rec(arr,left,middle);
	rs=fun3_rec(arr,middle+1,right);
	int bls=0,brs=0;
	int sum=0;
	for(int i=middle;i>=0;i--){
		sum+=arr[i];
		if(sum>bls){
			bls=sum;
		}
	}
	sum=0;
	for(int i=middle+1;i<=right;i++){
		sum+=arr[i];
		if(sum>brs){
			brs=sum;
		}
	}
	int res=ls;
	if(res<rs){
		res=rs;
	}
	if(res<bls+brs){
		res=bls+brs;
	}
	return res;
}
int fun4_dp(int arr[],int N){
	int t=0;
	int m=0;
	for(int i=0;i<N;i++){
		t+=arr[i];
		if(t>m) m=t;
		else if(t<0){
			t=0;
		}
	}
	return m;
}
int main(){
	int arr[]={2,3,5,-2,-1,4,-4};
	int N=7;
	printf("%d\n",fun3_rec(arr,0,6));
	printf("%d",fun4_dp(arr,N));
	return 0;
}
