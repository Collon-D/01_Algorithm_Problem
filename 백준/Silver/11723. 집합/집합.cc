#include <iostream>
#include <string>

using namespace std;

short input[21];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    string tmp;
    int M, X; cin >> M;
    
    for (int i = 0; i < M; ++i) {
        cin >> tmp;
        if (tmp == "add") {
            cin >> X;
            input[X] = input[X] == 0 ? 1 : input[X];
        }
        else if (tmp == "remove") {
            cin >> X;
            input[X] = input[X] == 1 ? 0 : input[X];
        }
        else if (tmp == "check") {
            cin >> X;
            if (input[X] == 1) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (tmp == "toggle") {
            cin >> X;
            input[X] = input[X] == 1 ? 0 : 1;
        }
        else if (tmp == "all") {
            for (int i = 1; i < 21; ++i) input[i] = 1;
        }
        else if (tmp == "empty") {
            for (int i = 1; i < 21; ++i) input[i] = 0;
        }
    }

    return 0;
}