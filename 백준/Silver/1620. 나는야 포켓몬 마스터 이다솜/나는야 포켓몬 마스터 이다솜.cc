#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, M; cin >> N >> M;
    map<string, int> SI;
    map<int, string> IS;
    string tmp;

    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        SI.insert(make_pair(tmp, i + 1));
        IS.insert(make_pair(i + 1, tmp));
    }

    for (int i = 0; i < M; ++i) {
        cin >> tmp;
        if ('1' <= tmp[0] && tmp[0] <= '9') cout << IS[stoi(tmp)] << "\n";
        else cout << SI[tmp] << "\n";
    }

    return 0;
}