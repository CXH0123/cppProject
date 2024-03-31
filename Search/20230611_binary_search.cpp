#include <iostream>
using namespace std;

int BS(int n[], int d, int l, int r) {
    int m = (l + r) / 2;

    if (l > r) {
        return 0;
    }
    if (d > n[m]) {
        return BS(n, d, m + 1, r);
    }else if (d < n[m]) {
        return BS(n, d, l, m - 1);
    }else{
        return 1;
    }
    return 0;
}


int main() {
    int n[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    cout << "jhuij";

    printf("%d", BS(n, 9, 0, 8));
}
