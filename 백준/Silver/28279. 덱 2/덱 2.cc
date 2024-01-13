#include <iostream>
#include <deque>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N;
    deque<int> DQ;
    cin >> N;

    int input, tmp;

    for (int i = 0; i < N; ++i) {
        cin >> input;

        switch(input) {
            case 1: {
                cin >> tmp;
                DQ.push_front(tmp);
                break;
            }
            case 2: {
                cin >> tmp;
                DQ.push_back(tmp);
                break;
            } 
            case 3: {
                if (!DQ.empty()) {
                    tmp = DQ.front();
                    DQ.pop_front();
                    cout << tmp << "\n";
                }
                else cout << -1 << "\n";
                break;
            }
            case 4: {
                if (!DQ.empty()) {
                    tmp = DQ.back();
                    DQ.pop_back();
                    cout << tmp << "\n";
                }
                else cout << -1 << "\n";
                break;
            }
            case 5: {
                cout << DQ.size() << "\n";
                break;
            }
            case 6: {
                if (DQ.empty()) cout << 1 << "\n";
                else cout << 0 << "\n";
                break;
            }
            case 7: {
                if (DQ.empty()) cout << -1 << "\n";
                else cout << DQ.front() << "\n";
                break;
            }
            case 8: {
                if (DQ.empty()) cout << -1 << "\n";
                else cout << DQ.back() << "\n";
                break;
            }
        }
    }

    return 0;
}