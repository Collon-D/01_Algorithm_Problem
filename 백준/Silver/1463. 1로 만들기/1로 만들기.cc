#include <iostream>

using namespace std;
#define MILLION 1000001

int DP[MILLION] = { 0, 0, 1, 1, };

int setDP(int N) {
    if (N == 1) return 0;
    if (N == 2 || N == 3) {
        return 1;
    }

    for (int i = 4; i <= N; ++i) {
        if (i % 3 == 0 && i % 2 == 0) {
            int min = MILLION;
            min = DP[i / 3] > DP[i / 2] ? DP[i / 2] : DP[i / 3];
            min = min > DP[i - 1] ? DP[i - 1] : min;
            DP[i] = min + 1;
        }
        else if (i % 3 == 0) {
            DP[i] = DP[i / 3] > DP[i - 1] ? DP[i - 1] + 1 : DP[i / 3] + 1;
        }
        else if (i % 2 == 0) {
            DP[i] = DP[i / 2] > DP[i - 1] ? DP[i - 1] + 1 : DP[i / 2] + 1;
        }
        else DP[i] = DP[i - 1] + 1;
    }

    return DP[N];
}   

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n; cin >> n;
    cout << setDP(n);

    return 0;
}