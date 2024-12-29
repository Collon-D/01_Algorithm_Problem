#include <iostream>

using namespace std;

int dp[31][31];

int Solution(int n, int k)
{
	for (int i = 0; i < 31; i++)
	{
		for (int j = 0; j < 31; j++)
		{
			dp[i][j] = 1;
		}
	}

	for (int i = 2; i < 31; i++)
	{
		for (int j = 1; j < i; j++)
		{
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}

	return dp[n - 1][k - 1];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k; cin >> n >> k;
	cout << Solution(n, k);

	return 0;
}
