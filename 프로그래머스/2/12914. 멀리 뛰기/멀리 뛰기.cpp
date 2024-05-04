#include <string>
#include <vector>

using namespace std;

#define divisor 1234567

long long dp[2001] = { 0, 1, 2, 3 };

void setup() {
    for (int i = 4; i < 2001; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % divisor;
    }
}

long long solution(int n) {
    setup();
    return dp[n];
}