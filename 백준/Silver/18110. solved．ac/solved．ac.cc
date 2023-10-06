#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n; cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int avg = (int)(n * 0.15 + 0.5);
    double answer = 0.;
    vector<int> input(n);

    for (int i = 0; i < n; ++i) 
        cin >> input[i];
    sort(input.begin(), input.end());

    for (int i = avg; i < n - avg; ++i) {
        answer += input[i];
    }
    answer = answer / (n - avg * 2) + 0.5;
    cout << (int)answer;

    return 0;
}