#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, M, count = 0; cin >> N >> M;
    string str; cin >> str;
    string P = "I";
    bool isEqual = true;

    for (int i = 0; i < N; ++i) P += "OI";
    
    for (int i = 0; i < str.size() - P.size() + 1; ++i) {
        isEqual = true;
        for (int j = 0; j < P.size(); ++j) {
            if (P[j] != str[j + i]) {
                isEqual = false;
                break;
            }
        }

        count += isEqual ? 1 : 0;
    }
    cout << count << "\n";

    return 0;
}