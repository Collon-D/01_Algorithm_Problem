#include <iostream>
#include <unordered_map>

using namespace std;

void Solution()
{
	unordered_map<long long, int> solider;

	int m; cin >> m;
	int half = m / 2;
	long long answer = -1, max = 0;

	for (int i = 0; i < m; i++)
	{
		long long k; cin >> k;

		solider[k]++;
		
		if (solider[k] > max)
		{
			max = solider[k];
			answer = k;
		}
	}

	if (max > half)
	{
		cout << answer << "\n";
	}
	else
	{
		cout << "SYJKGW" << "\n";
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		Solution();
	}

	return 0;
}