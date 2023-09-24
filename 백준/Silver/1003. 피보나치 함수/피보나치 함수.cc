#include <iostream>

using namespace std;

long long dp[41] = { 0, 1, };

long long fibonacci(int n) {
    if (n == 0 || n == 1) {
        return dp[n];
    } 
    else if (dp[n] == 0) {
        dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return dp[n];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        if (m == 0) {
            cout << 1 << " " << 0 << "\n";
        }
        else {
            cout << fibonacci(m - 1) << " " << fibonacci(m) << "\n";
        }
    }

    return 0;
}   