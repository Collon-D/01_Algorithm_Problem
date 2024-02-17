#include <iostream>

using namespace std;

#define num 1000001
#define div 15746

int dp[num] = { 0, 1, 2, 3, 5, };

void setDP() {
    for (int i = 5; i < num; ++i) {
        dp[i] = (dp[i - 1]  + dp[i - 2]) % div;
    }
}

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    setDP();

    int n;
    cin >> n;
    cout << dp[n];

    return 0;
}