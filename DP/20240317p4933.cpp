#include <iostream>
#define MAX 20000
#define MOD    998244353
using namespace std;
int dp[1005][MAX*2];
int arr[1005],sum=0;
int main() {
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        for (int j = (i - 1); j >= 1; j--) {
            int d=arr[i]-arr[j]+MAX;
            (dp[i][d]+=dp[j][d]+1)%=MOD;
            (sum+=dp[j][d]+1)%=MOD;
        }
    }
    cout<<sum+n;
    return 0;
}
