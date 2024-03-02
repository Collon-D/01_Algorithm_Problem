#include <iostream>

using namespace std;

#define ll long long int
#define size 1000001
#define divisor 1000000009

ll dp[size];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i < size; ++i) 
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % divisor;    

    int t, n;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}