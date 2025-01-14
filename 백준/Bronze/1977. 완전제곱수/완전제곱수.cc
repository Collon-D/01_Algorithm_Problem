#include <iostream>

using namespace std;

void Solution(int n, int m)
{
	int sum = 0, min = 10001;
	for (int i = 1; i <= 100; i++)
	{
		int square = i * i;
		if (n <= square && square <= m)
		{
			sum += square;
			if (min > square)
			{
				min = square;
			}
		}
	}

	if (sum == 0)
	{
		cout << -1;
	}
	else
	{
		cout << sum << "\n" << min;
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m; cin >> n >> m;
	Solution(n, m);

	return 0;
}