#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 1; j < N - i; ++j) {
            cout << " ";
        }
        for (int j = i + 1; j > 0; --j)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}