#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int hex2decimal(string str) {
    int answer = 0, tmp = 0;

    for (int i = 0; i < str.size(); ++i) {
        if ('0' <= str[i] && str[i] <= '9') {
            tmp = str[i] - '0';
        }
        else {
            tmp = str[i] - 'A' + 10;
        }
        answer += (int)pow(16, str.size() - 1 - i) * tmp;
    }

    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str;
    cin >> str;

    cout << hex2decimal(str) << "\n";
    return 0;
}