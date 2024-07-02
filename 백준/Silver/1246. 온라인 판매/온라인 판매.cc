#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m; cin >> n >> m;
	vector<int> customer(m);
	for (int i = 0; i < m; ++i)
		cin >> customer[i];
	sort(customer.begin(), customer.end(), greater<int>());

	int max = 0, idx = 0;
	for (int i = 0; i < m; ++i)
	{
		if (i < n) 
		{
			if (customer[i] * (i + 1) > max)
			{
				max = customer[i] * (i + 1);
				idx = i;
			}
		}
		else break;
	}

	cout << customer[idx] << " " << max;
	return 0;
}