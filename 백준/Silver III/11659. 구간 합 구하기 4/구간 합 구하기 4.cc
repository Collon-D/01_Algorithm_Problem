#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, i, j, tmp;
    cin >> n >> m;
    vector<int> arr(n + 1), sum(n + 1, 0);

    for (int k = 1; k < n + 1; ++k) {
        cin >> tmp;
        arr[k] = tmp;
    }

    sum[1] = arr[1];
    for (int k = 1; k < n + 1; ++k) {
        sum[k] = sum[k - 1] + arr[k];
    }

    for (int k = 0; k < m; ++k) {
        cin >> i >> j;
        cout << sum[j] - sum[i - 1] << "\n";
    }

    return 0;
}