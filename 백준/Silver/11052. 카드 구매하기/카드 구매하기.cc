#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    vector<int> card_pack(n + 1, 0), dp(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> card_pack[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i] = max(dp[i], dp[i - j] + card_pack[j]);
        }
    }

    cout << dp[n];
    return 0;
}