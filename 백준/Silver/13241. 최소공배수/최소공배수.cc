#include <iostream>

#define ll long long int

using namespace std;

ll GCD(ll a, ll b) {
    ll tmp, n;

    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    while (b != 0) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}

ll LCM(ll a, ll b) {
    ll gcd = GCD(a, b);

    return gcd * (a / gcd) * (b / gcd);
}

int main(void) {
    ios::sync_with_stdio(false);
    cout.tie(nullptr); cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;

    cout << LCM(a, b);

    return 0;
}