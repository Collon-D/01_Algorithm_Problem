#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, answer = 0;
    string tmp;
    map<string, int> DS;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if ("ENTER" == tmp) {
            answer += DS.size();
            DS.clear();
        }
        else {
            DS.insert({tmp, 1});
        }
    }

    if (!DS.empty()) {
        answer += DS.size();
    }
    cout << answer;

    return 0;
}