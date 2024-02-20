#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N, K, answer = 0;
    cin >> N;

    vector<int> rope(N);
    for (int i = 0; i < N; ++i)
        cin >> rope[i];
    sort(rope.begin(), rope.end());

    answer = rope[0] * N;
    int cnt = N;
    for (int i = 1; i < N; ++i) {
        cnt--;
        if (rope[i] == rope[i - 1]) continue;
        else {
            if (answer < rope[i] * cnt) { 
                answer = rope[i] * cnt;
            }
        }
    }

    cout << answer;
    return 0;
}