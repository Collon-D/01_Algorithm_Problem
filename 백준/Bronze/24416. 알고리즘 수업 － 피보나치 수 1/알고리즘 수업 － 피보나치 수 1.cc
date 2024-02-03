#include <iostream>

using namespace std;

int recur, dp;

int DP[41] = { 0, };


int recur_fib(int n) {
    if (n == 1 || n == 2) {
        recur++;
        return 1;
    }
    else return recur_fib(n -1) + recur_fib(n - 2);
}

void dp_fib(int n) {
    DP[1] = DP[2] = 1;
    for (int i = 3; i <= n; ++i) {
        dp++;
        DP[i] = DP[i - 1] + DP[i - 2];
    }
}

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N; 
    cin >> N;  
    
    recur_fib(N);
    dp_fib(N);

    cout << recur << " " << dp;
    return 0;
}