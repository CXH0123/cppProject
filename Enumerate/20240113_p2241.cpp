#include<iostream>
using namespace std;
int main() {
    long long x, y, sqr = 0, rec = 0;
    
    cin >> x >> y;
    for (long long i = 1; i <= x; i++) {
        for (long long j = 1; j <= y; j++) {
            if (i == j) {
                sqr += (x - (i - 1)) * (y - (j - 1));
            }else{
                rec += (x - (i - 1)) * (y - (j - 1));
            }
        }
    }
    cout<<sqr<<" "<<rec;
}
