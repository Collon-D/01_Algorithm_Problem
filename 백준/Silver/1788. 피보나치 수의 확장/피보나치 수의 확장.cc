#include <iostream>
#include <cmath>

using namespace std;

#define divisor 1000000000
#define ll long long
#define size 1000001

ll pos_fibbo[size] = { 0, 1, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    for (int i = 2; i < size; ++i) {
        pos_fibbo[i] = (pos_fibbo[i - 1] + pos_fibbo[i - 2]) % divisor;
    }

    ll n; cin >> n;

    if (n > 0) {
        cout << 1 << "\n";
        cout << pos_fibbo[n];
    }
    else if (n < 0) {
        if (n & 1) {
            cout << 1 << "\n";
            cout << pos_fibbo[abs(n)];
        }
        else {
            cout << -1 << "\n";
            cout << pos_fibbo[abs(n)];
        }
    }
    else {
        cout << 0 << "\n";
        cout << 0;
    }

    return 0;
}