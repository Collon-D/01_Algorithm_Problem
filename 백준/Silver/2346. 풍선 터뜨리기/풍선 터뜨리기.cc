#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N, tmp; 
    cin >> N;
    deque<pair<int, int>> DQ;
    vector<int> answer;

    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        DQ.push_back(pair<int, int>(i + 1, tmp));
    }

    while (true) {
        int cnt = DQ.front().second;
        answer.push_back(DQ.front().first);
        DQ.pop_front();

        if (DQ.empty()) break;

        if (cnt > 0) {
            for (int i = 0; i < cnt - 1; ++i) {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
        }
        else {
            for (int i = cnt; i < 0; ++i) {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
        }
    }
    
    for (int i = 0; i < N; ++i) {
        cout << answer[i] << " ";
    }

    return 0;
}