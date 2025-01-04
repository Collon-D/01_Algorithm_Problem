#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
vector<int> dp;

int Solution(int i, int j)
{
	return dp[j] - dp[i - 1];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	arr.resize(n + 1, 0);
	dp.resize(n + 1, 0);

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		dp[i] = dp[i - 1] + arr[i];
	}

	int m; cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y; cin >> x >> y;
		cout << Solution(x, y) << "\n";
	}

	return 0;
}