#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    deque<pair<int, int>> dq;
    int t, n, m;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        dq.clear();
        cin >> n >> m;

        int tmp;
        for (int j = 0; j < n; ++j) {
            cin >> tmp;
            dq.push_back({j, tmp}); // {문서 순서, 중요도}
        }

        int cnt = 1;
        while (true) {
            auto cur = dq.front();
            dq.pop_front();

            bool check = false;
            for (int k = 0; k < dq.size(); ++k) {
                if (dq[k].second > cur.second) {
                    check = true;
                    break;
                }
            }

            // 중요도가 더 높은 순서가 있다면, 맨 뒤로 보내기
            if (check)
                dq.push_back(cur);
            else {
                // 현재 문서 번호가 찾으려고 하는 문서 번호이면
                if (cur.first == m) {
                    cout << cnt << "\n";
                    break;
                }
                cnt++;
            }
        }
    }

    return 0;
}