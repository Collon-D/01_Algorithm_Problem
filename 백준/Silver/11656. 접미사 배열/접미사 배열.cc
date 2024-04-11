#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str; cin >> str;

    vector<string> answer;

    for (int i = 0; i < str.size(); ++i) {
        answer.push_back(str.substr(i));
    }
    sort(answer.begin(), answer.end());

    for (int i = 0; i < answer.size(); ++i) {
        cout << answer[i] << "\n";
    }

    return 0;
}