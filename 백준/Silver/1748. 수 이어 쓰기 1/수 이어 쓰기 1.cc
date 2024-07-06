#include <iostream>

using namespace std;

#define ll long long int

ll solution(ll n)
{
	ll answer = 0;

	for (int i = 1; i <= n; i *= 10) {
		answer += (n - i + 1);
	}

	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	ll n; cin >> n;
	cout << solution(n);

	return 0;
}