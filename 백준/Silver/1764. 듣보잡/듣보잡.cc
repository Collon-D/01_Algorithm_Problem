#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, M; cin >> N >> M;
    string tmp;
    map<string, bool> mmap;
    vector<string> answer;

    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        mmap.insert(make_pair(tmp, true));
    }
    for (int i = 0; i < M; ++i) {
        cin >> tmp;
        if (mmap[tmp] == true) answer.push_back(tmp);
    }
    sort(answer.begin(), answer.end());

    cout << answer.size() << "\n";
    for (int i = 0; i < answer.size(); ++i) 
        cout << answer[i] << "\n";

    return 0;
}