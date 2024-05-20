#include <iostream>

using namespace std;

#define divisor 1000000000

int dp[101][10];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int answer = 0, n; cin >> n;

    for (int i = 1; i < 10; ++i) 
    {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= n; ++i)
    {
        for (int j = 0; j < 10; ++j) 
        {
            if (j == 0) 
            {
                dp[i][0] = dp[i - 1][j + 1];
            }
            else if (j == 9) 
            {
                dp[i][9] = dp[i - 1][j - 1];
            }
            else 
            {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }

            dp[i][j] %= divisor;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        answer = (answer + dp[n][i]) % divisor;
    }

    cout << answer;
    return 0;
}