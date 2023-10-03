#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> input(N);
    for (int i = 0; i < N; ++i) {
        input[i] = i + 1;
    }

    cout << "<";
    int cur_idx = 0;
    for (int i = 0; i < N - 1; ++i) {
        cur_idx = (cur_idx + K - 1) % input.size();
        cout << input[cur_idx] << ", ";
        input.erase(input.begin() + cur_idx);
    }
    cout << input[0] << ">";

    return 0;
}