#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    string tmp;
    stack<int> st;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        if (tmp == "push") {
            cin >> M;
            st.push(M);
        }
        else if (tmp == "top") {
            if (st.empty()) cout << -1 << "\n";
            else cout << st.top() << "\n";
        }
        else if (tmp == "size") {
            cout << st.size() << "\n";
        }
        else if (tmp == "empty") {
            if (st.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (tmp == "pop") {
            if (st.empty()) cout << -1 << "\n";
            else {
                int re = st.top();
                cout << re << "\n";
                st.pop();
            }
        }
    }

    return 0;
}