/*
 * 数楼梯
 * 高精度加法
 */
#include <iostream>
#include <string>

using namespace std;

string addStrings(string num1, string num2) {
    string result = "";
    int carry = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum = sum % 10;

        result = to_string(sum) + result;

        i--;
        j--;
    }

    return result;
}


int main() {
    int N;

    std::cin >> N;

    string a("1");
    string b("2");
    string c("");

    if (N == 1) {
        cout << a << endl;
        return 0;
    }else if (N == 2) {
        cout << b << endl;
        return 0;
    }

    for (int i = 2; i < N; i++) {
        c = addStrings(a, b);
        a = b;
        b = c;
    }
    cout << c << endl;
}
