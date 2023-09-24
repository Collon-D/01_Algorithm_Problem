#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int N, K, answer = 0, tmp;
    cin >> N >> K;

    vector<int> coin(N);
    for (int i = 0; i < N; ++i) 
        cin >> coin[i];
    
    int i = N - 1;
    while (K > 0) {
        if (K >= coin[i]) {
            K -= coin[i];
            answer++;
        } else {
            i--;
        }
    }

    cout << answer;
    return 0;
}