#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    long long n, answer = 0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) 
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; ++i) {
        answer += abs(arr[i] - i - 1);
    }

    cout << answer;
    return 0;
}