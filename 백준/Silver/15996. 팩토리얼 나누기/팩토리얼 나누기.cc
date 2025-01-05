#include <iostream>

using namespace std;

int Solution(int _n, int _a)
{
	int k = 0;
	int p = _a;

	while (_n / p > 0)
	{
		k += _n / p;
		p *= _a;
	}

	return k;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, a; cin >> n >> a;
	cout << Solution(n, a);

	return 0;
}