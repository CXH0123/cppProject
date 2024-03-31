#include<iostream>
using namespace std;
int main(){
	int value[6]={0,1000,400,400,1200,300};
	int weight[6]={0,3,4,6,6,5};
	int volume=15;
	int dpArr[8][18];
	for(int i=0;i<=16;i++){
		dpArr[0][i]=0;
	}
	for(int i=1;i<=5;i++){
		for(int j=0;j<=16;j++){
			if(j>=weight[i]){
				if(dpArr[i-1][j]>dpArr[i-1][j-weight[i]]+value[i])
					dpArr[i][j]=dpArr[i-1][j];
				else
					dpArr[i][j]=dpArr[i-1][j-weight[i]]+value[i];
			}
			else{
				dpArr[i][j]=dpArr[i-1][j];
			}
		}
	}
	for(int i=0;i<=5;i++){
		for(int j=0;j<=16;j++){
			printf("%7d",dpArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
