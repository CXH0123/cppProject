#include <iostream>
using namespace std;
int main() {
    int price[] = { 1, 5, 10, 25 };
    int sum, ans = 0;

    cin >> sum;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (price[i] < price[j]) {
                swap(price[i], price[j]);
            }
        }
    }
    int i = 0;

    while (sum != 0) {
        while (price[i] > sum) {
            i++;
        }
        ans++;
        sum -= price[i];
    }
    cout << ans;
    return 0;
}
