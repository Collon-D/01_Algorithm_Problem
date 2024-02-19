#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N, tmp, A, T, answer = 0;
    stack<pair<int, int>> st;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> tmp;

        if (tmp) {
            cin >> A >> T;
            st.push({A, T});
        }

        if (!st.empty()) {
            pair<int, int>& top = st.top();
            if (--top.second == 0) {
                answer += top.first;
                st.pop();
            }
        }
    }

    cout << answer;
    return 0;
}