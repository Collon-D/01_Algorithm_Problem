#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N, M; cin >> N >> M;
    int cnt = 0;
    map<string, bool> S;
    string tmp;

    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        S.insert(make_pair(tmp, true));
    }
    for (int i = 0; i < M; ++i) {
        cin >> tmp;
        cnt += S[tmp] == true ? 1 : 0;
    }
    cout << cnt;

    return 0;
}