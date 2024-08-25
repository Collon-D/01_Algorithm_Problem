#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t, n, c; cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n >> c;
        cout << (n / c) + (n % c != 0 ? 1 : 0) << "\n";
    }

    return 0;
}