#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int T, N, tmp;
    int max, min, gap = 0;

    cin >> T;
    for (int i = 1; i <= T; ++i) {
        gap = 0;
        cin >> N;
        vector<int> answer;
        for (int j = 0; j < N; ++j) {
            cin >> tmp;
            answer.push_back(tmp);
        }
        sort(answer.begin(), answer.end(), greater<int>());
        max = answer[0], min = answer[answer.size() - 1];

        for (int j = 0; j < N - 1; ++j) {
            gap = answer[j] - answer[j + 1] > gap ? answer[j] - answer[j + 1] : gap;
        }

        cout << "Class " << i << "\n";
        cout << "Max " << max << ", Min " << min << ", Largest gap " << gap << "\n";
    }

    return 0;
}