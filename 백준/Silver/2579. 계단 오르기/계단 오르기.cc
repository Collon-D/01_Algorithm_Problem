#include <iostream>

using namespace std;

#define size 301

int step[size];
int dp[size];

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, answer = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> step[i];
    }

    dp[1] = step[1];
    dp[2] = step[1] + step[2];
    dp[3] = step[1] + step[3] > step[2] + step[3] ? step[1] + step[3] : step[2] + step[3];

    for (int i = 4; i <= n; ++i) {
        dp[i] = dp[i - 2] + step[i] > dp[i - 3] + step[i - 1] + step[i] ?
            dp[i - 2] + step[i] : dp[i - 3] + step[i - 1] + step[i];
    }

    answer = dp[n];
    cout << answer;
    return 0;
}