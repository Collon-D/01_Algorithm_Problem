#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, k, answer = 0; cin >> n >> k;
    vector<int> lan_cable(n);
    for (int i = 0; i < n; ++i) {
        cin >> lan_cable[i];
    }
    sort(lan_cable.begin(), lan_cable.end());

    long long l = 1, r = lan_cable[n - 1];
    while (l <= r) {
        int tmp = 0;
        long long mid = (l + r) / 2;

        for (int i = 0; i < n; ++i) {
            tmp += lan_cable[i] / mid;
        }

        if (tmp < k) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
            answer = mid;
        }
    }

    cout << answer;
    return 0;
}