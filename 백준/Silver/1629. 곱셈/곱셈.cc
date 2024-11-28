#include <iostream>

using namespace std;

#define ll long long

ll solve(ll a, ll b, ll c)
{
	if (b == 0) return 1;
	
	ll tmp = solve(a, b / 2, c);
	tmp = tmp * tmp % c;
	if (b % 2 == 0) return tmp;
	else return tmp * a % c;
}

int main(int argc, char* argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	ll a, b, c;
	cin >> a >> b >> c;
	cout << solve(a, b, c);

	return 0;
}
