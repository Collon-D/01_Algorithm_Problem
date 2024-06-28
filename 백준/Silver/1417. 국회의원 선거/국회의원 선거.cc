#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, answer = 0, first; cin >> n;
	priority_queue<int> candidate;
	cin >> first;
	for (int i = 0; i < n - 1; ++i)
	{
		int tmp; cin >> tmp;
		candidate.push(tmp);
	}

	for (int i = 0; i < n - 1; ++i)
	{
		while (first <= candidate.top())
		{
			first++; answer++;
			int tmp = candidate.top();
			tmp--;
			candidate.pop();
			candidate.push(tmp);
		}
	}

	cout << answer;
	return 0;
}