#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int>& budget, int start, int end, int m)
{
	int result, sum;

	while (start <= end)
	{
		sum = 0;
		int mid = (start + end) / 2;

		for (int i = 0; i < budget.size(); ++i)
		{
			sum += min(budget[i], mid);
		}

		if (m >= sum)
		{
			result = mid;
			start = mid + 1;
		}
		else 
		{
			end = mid - 1;
		}
	}

	return result;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m; cin >> n;
	vector<int> budget(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> budget[i];
	}
	sort(budget.begin(), budget.end());
	cin >> m;

	// solution
	cout << binary_search(budget, 0, budget[n -1], m);
	return 0;
}