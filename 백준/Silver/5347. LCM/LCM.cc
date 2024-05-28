#include <iostream>

using namespace std;

#define ll long long int

ll gcd(ll a, ll b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll t; cin >> t;
    for (int i = 0; i < t; ++i)
    {
        ll a, b; cin >> a >> b;
        cout << lcm(a, b) << "\n";
    }

    return 0;
}