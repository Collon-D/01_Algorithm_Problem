#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    string str;
    queue<int> Q;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> str;
        if (str == "push") {
            cin >> M;
            Q.push(M);
        }
        else if (str == "pop") {
            if (!Q.empty()) {
                int pop_value = Q.front();
                Q.pop();
                cout << pop_value << "\n";
            }
            else cout << -1 << "\n";
        }
        else if (str == "size") {
            cout << Q.size() << "\n";
        }
        else if (str == "empty") {
            if (Q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (str == "front") {
            if (Q.empty()) cout << -1 << "\n";
            else cout << Q.front() << "\n";
        }
        else if (str == "back") {
            if (Q.empty()) cout << -1 << "\n";
            else cout << Q.back() << "\n";
        }
    }

    return 0;
}