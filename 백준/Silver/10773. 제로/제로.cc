#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int K, n;
    vector<int> tmp;
    int answer = 0;
    cin >> K;

    for (int i = 0; i < K; ++i) {
        cin >> n;
        if (n == 0) tmp.pop_back();
        else tmp.push_back(n);
    }

    for (int i = 0; i < tmp.size(); ++i) answer += tmp[i];
    cout << answer;
    return 0;
}