#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, x, answer = 0; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cin >> x;
	sort(arr.begin(), arr.end());

	int left = 0, right = n - 1;
	while (left < right)
	{
		int sum = arr[left] + arr[right];

		if (sum > x)
		{
			right--;
		}
		else if (sum < x)
		{
			left++;
		}
		else 
		{
			right--; left++;
			answer++;
		}
	}

	cout << answer;

	return 0;
}