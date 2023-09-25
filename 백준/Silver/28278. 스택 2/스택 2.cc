#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int N, input, tmp, output = 0;
    vector<int> answer;
    cin >> N;


    for (int i = 0; i < N; ++i) {
        output = 0;
        cin >> input;

        switch(input) {
            case 1: {
                cin >> tmp;
                answer.push_back(tmp);
                break;
            }
            case 2: {
                if (!answer.empty()) {
                    output = answer[answer.size() - 1];
                    answer.pop_back();
                    cout << output << "\n";
                }
                else cout << -1 << "\n";
                break;
            }
            case 3: {
                cout << answer.size() << "\n";
                break;
            }
            case 4: {
                if (answer.empty()) cout << 1 << "\n";
                else cout << 0 << "\n";
                break;
            }
            case 5: {
                if (!answer.empty()) cout << answer[answer.size() - 1] << "\n";
                else cout << -1 << "\n";
                break;
            }
        }
    }

    return 0;
}