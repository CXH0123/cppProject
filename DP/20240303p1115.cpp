#include <iostream>
using namespace std;
int main() {
    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cur = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        cur = std::max(arr[i], cur + arr[i]);
        max = std::max(cur, max);
    }
    cout << max;
    return 0;
}
