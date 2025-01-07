#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> input;

int Solution()
{
	int answer = -1;

	int n; cin >> n;
	input.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	sort(input.begin(), input.end(), greater<int>());

	for (int i = 0; i < n - 2; i++)
	{
		int longLine = input[i];
		int	sumLines = input[i + 1] + input[i + 2];

		if (longLine < sumLines)
		{
			answer = longLine + sumLines;
			break;
		}
	}
	
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cout << Solution();

	return 0;
}