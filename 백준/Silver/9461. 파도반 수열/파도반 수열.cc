#include <iostream>

using namespace std;

long long dp[101] = { 0, 1, 1, 1 };

void setup() {
    for (int i = 4; i < 101; ++i) {
        dp[i] = dp[i - 2] + dp[i - 3];
    }
}

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    setup();

    int n, tmp;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        cout << dp[tmp] << "\n";
    }

    return 0;
}