#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    vector<int> input(N);

    for (int i = 0; i < N; ++i) {
        cin >> input[i];
    }

    sort(input.begin(), input.end());
    cout << input[0] << " " << input[N - 1];

    return 0;
}