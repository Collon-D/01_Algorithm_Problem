#include <iostream>

using namespace std;

#define size 1001
#define divisor 10007

int dp[size][size];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    for (int i = 1; i < size; ++i) {
        dp[i][0] = dp[i][i] = 1;
    }

    for (int i = 1; i < size; ++i) {
        for (int j = 1; j < i; ++j) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % divisor;
        }
    }

    int n, k;
    cin >> n >> k;
    cout << dp[n][k];

    return 0;
}