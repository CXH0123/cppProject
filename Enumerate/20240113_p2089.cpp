#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, sum = 0;
    int result[50000][10];

    cin >> n;
    for (int a = 1; a <= 3; a++) {
        for (int b = 1; b <= 3; b++) {
            for (int c = 1; c <= 3; c++) {
                for (int d = 1; d <= 3; d++) {
                    for (int e = 1; e <= 3; e++) {
                        for (int f = 1; f <= 3; f++) {
                            for (int g = 1; g <= 3; g++) {
                                for (int h = 1; h <= 3; h++) {
                                    for (int i = 1; i <= 3; i++) {
                                        for (int j = 1; j <= 3; j++) {
                                            if (a + b + c + d + e + f + g + h + i + j == n) {
                                                result[sum][0] = a;
                                                result[sum][1] = b;
                                                result[sum][2] = c;
                                                result[sum][3] = d;
                                                result[sum][4] = e;
                                                result[sum][5] = f;
                                                result[sum][6] = g;
                                                result[sum][7] = h;
                                                result[sum][8] = i;
                                                result[sum][9] = j;
                                                sum++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << sum << endl;
    for (int i = 0; i < sum; i++) {
        for (int j = 0; j < 10; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
