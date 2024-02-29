#include <iostream>

using namespace std;

#define size 1001
#define divisor 10007

int dp[size];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;
    for (int i = 4; i < size; ++i) {
        dp[i] = (dp[i - 1] +  2 * dp[i - 2]) % divisor;
    }

    int n;
    cin >> n;
    cout << dp[n];
    return 0;
}