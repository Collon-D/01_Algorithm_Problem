#include <string>
#include <vector>

using namespace std;

#define divisor 1000000007
#define size    60001

int dp[size] = { 0, 1, 2, 3 };

void setup() {
    for (int i = 4; i < size; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % divisor;
    }
}

int solution(int n) {
    setup();
    return dp[n];
}