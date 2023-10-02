#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> input(8);
    vector<bool> ascend(8, false), descend(8, false);
    bool A = true, D = true;

    for (int i = 0; i < 8; ++i) {
        cin >> input[i];
        if (input[i] == i + 1) ascend[i] = true;
        else if (input[i] == 8 - i) descend[i] = true;
    }

    for (int i = 0; i < 8; ++i) {
        if (ascend[i] == false) A = false;
        if (descend[i] == false) D = false;
    }

    if (!A && !D) cout << "mixed";
    else if (A) cout << "ascending";
    else if (D) cout << "descending";

    return 0;
}