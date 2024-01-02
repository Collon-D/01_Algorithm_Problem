#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string input;
    set<string> answer;

    cin >> input;

    /* Logic */
    for (int i = 0; i < input.size(); ++i) {
        string tmp = "";
        for (int j = i; j < input.size(); ++j) {
            tmp += input[j];
            answer.insert(tmp);
        }
    }

    cout << answer.size(); 

    return 0;
}