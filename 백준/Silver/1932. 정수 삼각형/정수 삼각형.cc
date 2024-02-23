#include <iostream>

using namespace std;

#define size 501

int arr[size][size];
int sum[size][size];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, answer = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            sum[i][j] = arr[i][j];
            sum[i][j] += sum[i - 1][j - 1] > sum[i - 1][j] ? sum[i - 1][j - 1] : sum[i - 1][j];
        }
    }

    answer = sum[n][1];
    for (int i = 1; i <= n; ++i) {
        if (answer < sum[n][i]) answer = sum[n][i];
    }

    cout << answer;
    return 0;
}