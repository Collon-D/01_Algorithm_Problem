#include <iostream>

using namespace std;

#define size 10001

int arr[size];
int dp[size];

int max(int a, int b) { return a > b ? a : b; }

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) 
        cin >> arr[i];

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    for (int i = 3; i <= n; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 3] + arr[i - 1] + arr[i]);
        dp[i] = max(dp[i], dp[i - 2] + arr[i]);
    }

    cout << dp[n];
    return 0;
}