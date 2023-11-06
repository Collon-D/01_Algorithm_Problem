#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    string command;
    int t, num; cin >> t;
    queue<int> Q;

    for (int i = 0; i < t; ++i) {
        cin >> command;

        if (command == "push") {
            cin >> num;
            Q.push(num);
        }
        else if (command == "pop") {
            if (Q.empty()) cout << -1 << "\n";
            else {
                int n = Q.front();
                Q.pop();
                cout << n << "\n";
            }
        }
        else if (command == "size") {
            cout << Q.size() << "\n";
        }
        else if (command == "empty") {
            if (Q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (command == "front") {
            if (Q.empty()) cout << -1 << "\n";
            else cout << Q.front() << "\n";
        }
        else if (command == "back") {
            if (Q.empty()) cout << -1 << "\n";
            else cout << Q.back() << "\n";
        }
    }
    
    return 0;
}