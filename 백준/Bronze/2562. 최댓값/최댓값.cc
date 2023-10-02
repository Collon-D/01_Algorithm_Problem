#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> input(9);
    int max = 0, idx = 0;
    for (int i = 0; i < 9; ++i) {
        cin >> input[i];
        if (input[i] > max) {
            max = input[i];
            idx = i + 1;
        }
    }

    cout << max << "\n" << idx;
    return 0;
}