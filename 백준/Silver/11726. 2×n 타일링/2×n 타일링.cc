#include <iostream>

using namespace std;

#define DIVISOR 10007

long long DP[1001] = { 0, 1, 2, };

long long Dynamic(int n) {
    if (n < 3) return DP[n];

    for (int i = 3; i <= n; ++i) {
        DP[i] = (DP[i - 1] + DP[i - 2]) % DIVISOR;
    }
    return DP[n];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    long long n, answer = 0; cin >> n;
    answer = Dynamic(n);
    cout << answer << "\n";
    return 0;
}