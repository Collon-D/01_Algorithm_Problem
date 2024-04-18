#include <iostream>

using namespace std;

#define ll long long int

ll dp[10001] = { 1, 1, 2, 3, 4, 5 };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    for (int i = 6; i < 10001; ++i) {
        dp[i] = i + dp[i - 6];
    }

    int n, tmp; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        cout << dp[tmp] << "\n";
    }

    return 0;
}