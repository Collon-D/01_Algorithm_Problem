#include <iostream>

using namespace std;

#define size 91
#define ll long long int

ll dp[size] = { 0, 1, 1, 2 };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    for (int i = 4; i < size; ++i) 
        dp[i] = dp[i - 1] + dp[i - 2];

    int n;
    cin >> n;
    
    cout << dp[n];
    return 0;
}