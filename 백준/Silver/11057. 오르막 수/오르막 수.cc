#include <iostream>

using namespace std;

#define mod 10007

int dp[1001][10];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;

    for (int i = 0; i < 10; ++i)
    {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= 1000; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (j == 0) 
            {
                dp[i][0] = 1;
                continue;
            }

            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            dp[i][j] %= mod;
        }
    }

    int answer = 0;
    for (int i = 0; i < 10; ++i)
    {
        answer += dp[n][i];
    }
    answer %= mod;

    cout << answer;
    return 0;
}