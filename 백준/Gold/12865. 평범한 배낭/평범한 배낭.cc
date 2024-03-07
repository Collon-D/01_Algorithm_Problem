#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<vector<int>> arr(n + 1, vector<int>(k + 1, 0));
    vector<int> item(n + 1), value(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> item[i] >> value[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            if (j < item[i]) {
                arr[i][j] = arr[i - 1][j];
            }
            else {
                arr[i][j] = max(arr[i - 1][j - item[i]] + value[i], arr[i - 1][j]);
            }
        }
    }

    cout << arr[n][k];
    return 0;
}