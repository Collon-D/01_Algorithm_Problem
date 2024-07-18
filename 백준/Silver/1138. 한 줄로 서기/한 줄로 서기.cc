#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	vector<int> sequence(n, 0), answer(n, 0);
	for (int i = 0; i < n; ++i)
		cin >> sequence[i];

	for (int i = 0; i < n; ++i)
	{
		int j = 0;
		while (sequence[i] != 0)
		{
			if (answer[j] == 0)
			{
				sequence[i]--;
			}
			j++;
		}
		while (answer[j] != 0) j++;
		answer[j] = i + 1;
	}

	for (int i = 0; i < n; ++i)
		cout << answer[i] << " ";
	

	return 0;
}