#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, tmp;
    string str;
    deque<int> DQ;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> str;
        if (str == "push_front") {
            cin >> tmp;
            DQ.push_front(tmp);
        }
        else if (str == "push_back") {
            cin >> tmp;
            DQ.push_back(tmp);
        }
        else if (str == "pop_front") {
            if (DQ.empty()) cout << "-1\n";
            else {
                int pop_value = DQ.front();
                DQ.pop_front();
                cout << pop_value << "\n";
            }
        }
        else if (str == "pop_back") {
            if (DQ.empty()) cout << "-1\n";
            else {
                int pop_value = DQ.back();
                DQ.pop_back();
                cout << pop_value << "\n";
            }
        }
        else if (str == "size") {
            cout << DQ.size() << "\n";
        }
        else if (str == "empty") {
            cout << DQ.empty() << "\n";
        }
        else if (str == "front") {
            if (DQ.empty()) cout << "-1\n";
            else cout << DQ.front() << "\n";
        }
        else if (str == "back") {
            if (DQ.empty()) cout << "-1\n";
            else cout << DQ.back() << "\n";
        }
    }

    return 0;
}