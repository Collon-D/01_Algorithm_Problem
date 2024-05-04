#include <string>
#include <vector>

using namespace std;

#define size 100001
#define divisor 1234567

int dp[size] = { 0, 1, 1 };

void setup() {
    for (int i = 3; i < size; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % divisor;
    }
}

int solution(int n) {
    setup();
    return dp[n];
}