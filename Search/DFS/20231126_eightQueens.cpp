#include <iostream>
#define N    8
using namespace std;
//i 行 arr[i] 列
bool judge1(int top, int arr[]) {
    for (int i = top - 1; i >= 0; i--) {
        if (((arr[top] >= N) || (arr[top] == arr[i])) || (arr[top] + top == arr[i] + i) || (top - arr[top] == i - arr[i])) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int queen[N];

    for (int i = 0; i < N; i++) {
        queen[i] = -1;
    }
    int sum = 0, top = 0;

    do{
        queen[top] = queen[top] + 1;
        if (judge1(top, queen)) {
            if (top == N - 1) {
                sum++; //yes
            }else{
                top++; //no
            }
        }else{
            while (queen[top] >= N - 1) {
                queen[top] = -1;
                top--;
            }
        }
    }while (top != -1);
    cout << sum;
    return 0;
}
