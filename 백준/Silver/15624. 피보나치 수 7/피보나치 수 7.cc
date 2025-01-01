#include <iostream>

using namespace std;

const int SIZE = 1'000'000 + 1;
const int DIVISOR = 1'000'000'007;

int dp[SIZE] = { 0, 1, };

int Solution(int _n)
{
	for (int i = 2; i <= _n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % DIVISOR;
	}

	return dp[_n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	cout << Solution(n);

	return 0;
}