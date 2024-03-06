#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t, n, m, answer = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> m;
        answer = 0;
        for (int j = n; j <= m; ++j) {
            string str = to_string(j);
            for (int k = 0; k < str.size(); ++k) {
                answer += str[k] == '0' ? 1 : 0;
            }
        }
        cout << answer << "\n";
    }

    return 0;
}