#include"mysort.h"

using namespace mysort;
using namespace std;

int main(){
    int arr[10000]={};
    quick_sort(arr,0,9999);
    for(int i=0;i<10000;i++){
        cout<<arr[i]<<" ";
    }
}