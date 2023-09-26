#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string tmp;
    bool check = false;
    while (true) {
        check = false;
        cin >> tmp;
        if (tmp[0] == '0') break;

        for (int i = 0; i < tmp.size() / 2; ++i) {
            if (tmp[i] != tmp[tmp.size() - 1 - i]) check = true;
        }
        if (!check) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}