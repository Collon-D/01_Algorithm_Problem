#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int N, count = 0;
    string tmp, answer;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        count = 0;
        answer = "NO";
        cin >> tmp;

        for (int j = 0; j < tmp.size(); ++j) {
            count += tmp[j] == '(' ?  1 : -1;
            if (count == -1) {
                break;
            }
        }

        if (count == 0) cout << "YES\n";
        else cout << answer << "\n";
    }

    return 0;
}