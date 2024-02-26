#include <iostream>

using namespace std;

#define size 46

int dp[size];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    dp[1] = 1;
    
    for (int i = 2; i < size; ++i) 
        dp[i] = dp[i - 1] + dp[i - 2];

    int n;
    cin >> n;
    cout << dp[n];

    return 0;
}