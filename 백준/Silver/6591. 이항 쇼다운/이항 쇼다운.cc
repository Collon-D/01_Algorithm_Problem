#include <iostream>

using namespace std;

#define ll long long 

ll combination(int n, int k)
{
	ll answer = 1;

	for (int i = 1; i <= k; ++i)
	{
		answer = answer * (n - i + 1) / i;
	}

	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k; 
	
	while (true)
	{
		cin >> n >> k;
		if (n == 0 && k == 0) break;

		k = (k > n - k) ? n - k : k;

		cout << combination(n, k) << "\n";
	}

	return 0;
}