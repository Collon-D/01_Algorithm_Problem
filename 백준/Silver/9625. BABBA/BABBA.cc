#include <iostream>

using namespace std;

int dp[2][46];

void Solution(int n)
{
	/// dp[0][n] -> A의 개수
	/// dp[1][n] -> B의 개수
	dp[0][0] = 1; dp[1][0] = 0;
	dp[0][1] = 0; dp[1][1] = 1;
	
	for (int i = 2; i < 46; i++)
	{
		dp[0][i] = dp[0][i - 1] + dp[0][i - 2];
		dp[1][i] = dp[1][i - 1] + dp[1][i - 2];
	}

	cout << dp[0][n] << " " << dp[1][n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k; cin >> k;
	Solution(k);

	return 0;
}
