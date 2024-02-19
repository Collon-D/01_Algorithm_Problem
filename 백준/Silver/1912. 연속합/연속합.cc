#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, answer;
    cin >> n;
    vector<int> arr(n + 1), dp(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    answer = dp[1] = arr[0];
    for (int i = 2; i < n + 1; ++i) {
        dp[i] = arr[i - 1] < dp[i - 1] + arr[i - 1] ? dp[i - 1] + arr[i - 1] : arr[i - 1];
        if (answer < dp[i]) answer = dp[i];
    }

    cout << answer;
    return 0;
}