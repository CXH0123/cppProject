/*
三连击
*/
#include <iostream>
using namespace std;
int main() {
    int a, b, c, A, B, C;

    bool flag = 1, r = 0;
    
    cin >> A >> B >> C;
    for (int i = 1; i * C <= 999; i++) {
        int arr[10] = {};
        a = i * A;
        b = i * B;
        c = i * C;
        for (int j = 0; j < 3; j++) {
            arr[a % 10]++;
            a /= 10;
            arr[b % 10]++;
            b /= 10;
            arr[c % 10]++;
            c /= 10;
        }
        for (int j = 1; j < 10; j++) {
            if (arr[j] != 1) {
                flag = 0;
            }
        }
        if (flag == 1) {
            cout << i * A << " " << i * B << " " << i * C << endl;
            r = 1;
        }
        flag = 1;
    }
    if (r == 0) {
        cout << "No!!!";
    }
    return 0;
}
