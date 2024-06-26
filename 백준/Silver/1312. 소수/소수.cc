#include <iostream>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
	vector<int> calc;
	int tmp = n;

	a %= b;
	while (tmp > 0)
	{
		while (b > a && a != 0)
		{
			a *= 10;
			calc.push_back(0);
		}

		calc.push_back(a / b);
		a %= b; a *= 10;
		tmp--;
	}

	return calc[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int a, b, n; cin >> a >> b >> n;

	cout << solution(a, b, n);

	return 0;
}