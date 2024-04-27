#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> trees(n);
    for (int i = 0; i < n; ++i) {
        cin >> trees[i];
    }
    sort(trees.begin(), trees.end());

    // Binary-Search
    long long answer = 0, sum = 0;
    long long min_bound = 0, max_bound = trees[n - 1];

    while (min_bound <= max_bound) {
        long long avg = (min_bound + max_bound) / 2;
        sum = 0;

        for (int i = 0; i < n; ++i) {
            if (trees[i] > avg) {
                sum += trees[i] - avg;
            }
        }

        if (sum >= m) {
            answer = avg;
            min_bound = avg + 1;
        }
        else {
            max_bound = avg - 1;
        }
    }

    cout << answer;
    return 0;
}