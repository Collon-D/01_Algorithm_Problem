#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

static bool compare(pair<string, int>& a, pair<string, int>& b) {
    if (a.first.size() == b.first.size() && a.second == b.second) {
        return a.first < b.first;
    }
    else if (a.second == b.second) {
        return a.first.size() > b.first.size();
    }
    else {
        return a.second > b.second;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int m, n;
    string str;
    map<string, int> map_answer;

    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        cin >> str;

        if (str.size() >= n) {
            map_answer.insert({str, 0});
        }

        if (map_answer.find(str) != map_answer.end()) {
            map_answer[str]++;
        }
    }

    vector<pair<string, int>> v(map_answer.begin(), map_answer.end());
    sort(v.begin(), v.end(), compare);

    for (auto iter : v) {
        cout << iter.first << "\n";
    }

    return 0; 
}