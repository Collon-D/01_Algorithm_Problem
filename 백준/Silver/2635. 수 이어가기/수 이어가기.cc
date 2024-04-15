#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    vector<int> answer, tmp;

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        tmp.clear();
        tmp.push_back(n);
        tmp.push_back(i);

        int num = tmp[0] - tmp[1];
        int idx = 0;
        while (num >= 0) {
            tmp.push_back(num);
            idx++;

            num = tmp[idx] - tmp[idx + 1];
        }

        if (answer.size() < tmp.size()) {
            answer = tmp;
        }
    }

    cout << answer.size() << "\n";
    for (int i = 0; i < answer.size(); ++i) {
        cout << answer[i] << " ";
    }

    return 0;
}