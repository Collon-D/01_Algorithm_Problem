#include <iostream>

using namespace std;

const int SIZE = 116 + 1;

long long dp[SIZE] = { 0, 1, 1, 1, };

long long Solution(int _n)
{
	for (int i = 4; i <= _n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 3];
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