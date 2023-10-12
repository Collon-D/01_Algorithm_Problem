#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int DP[11] = { 0, 1, 2, 4, };

    for (int i = 4; i < 11; ++i) {
        DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
    }

    int T, n; cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> n;
        cout << DP[n] << "\n";
    }

    return 0;
}