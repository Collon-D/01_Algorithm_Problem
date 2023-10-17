#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int N, M; cin >> N >> M;
    string addr, pwd;
    map<string, string> answer;

    for (int i = 0; i < N; ++i) {
        cin >> addr >> pwd;
        answer.insert(make_pair(addr, pwd));
    }
    for (int i = 0; i < M; ++i) {
        cin >> addr;
        cout << answer[addr] << "\n";
    }

    return 0;
}