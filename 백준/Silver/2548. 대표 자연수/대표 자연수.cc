#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, answer = 0;
    cin >> n;
    vector<int> number(n);
    for (int i = 0; i < n; ++i) {
        cin >> number[i];
    }
    sort(number.begin(), number.end());

    int min_sum = 0x7fffffff;
    for (int i = 0; i < n; ++i) {
        int tmp_sum = 0;
        for (int j = 0; j < n; ++j) {
            tmp_sum += abs(number[i] - number[j]);
        }
        if (min_sum > tmp_sum) {
            min_sum = tmp_sum;
            answer = number[i];
        }
    }

    cout << answer;
    return 0;
}