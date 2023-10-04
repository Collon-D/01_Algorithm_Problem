#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, tmp;
    map<int, int> input;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> tmp;

        if (input.count(tmp) != 0) ++input[tmp];
        else input.insert(make_pair(tmp, 1));
    }

    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> tmp;
        cout << input[tmp] << " ";
    }

    return 0;
}