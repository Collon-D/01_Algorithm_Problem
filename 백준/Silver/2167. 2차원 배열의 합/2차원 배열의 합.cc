#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> arr;

int Solution(int a, int b, int c, int d)
{
	int sum = 0;
	int x = c - 1;
	int y = d - 1;

	for (int i = a - 1; i <= x; i++)
	{
		for (int j = b - 1; j <= y; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m; cin >> n >> m;
	arr.resize(n, vector<int>(m));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	int k; cin >> k;
	for (int cnt = 0; cnt < k; cnt++)
	{
		int i, j, x, y;
		cin >> i >> j >> x >> y;
		cout << Solution(i, j, x, y) << "\n";
	}

	return 0;
}