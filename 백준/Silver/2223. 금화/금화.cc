#include <iostream>
#include <vector>

using namespace std;

int Solution(int t, int x, int m)
{
	int answer = 0;

	int d, s;
	int minV = 100'000'000;

	for (int i = 0; i < m; i++)
	{
		cin >> d >> s;
		minV = min(minV, (d - 1) / s);
	}

	if (t >= minV)
	{
		answer = x * (minV + (t - minV) / 2);
	}
	else
	{
		answer = x * t;
	}

	if (minV == 0)
		answer = 0;
	if (m == 0)
		answer = x * t;

	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t, x, m; cin >> t >> x >> m;
	cout << Solution(t, x, m);

	return 0;
}