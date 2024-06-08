#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m, answer = 0; cin >> n >> m;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int sum = 0, end = 0;
	for (int i = 0; i < n; ++i)
	{
		while (sum < m && end < n)
		{
			sum += arr[end];
			end++;
		}

		if (sum == m) 
		{
			answer++;
		}
		sum -= arr[i];
	}

	cout << answer;
	return 0;
}