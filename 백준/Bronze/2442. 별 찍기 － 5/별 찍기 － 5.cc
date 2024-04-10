#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = n - i; j > 1; --j) 
            cout << " ";
        for (int j = 2 * i + 1; j > 0; --j)
            cout << "*";
        cout << "\n";
    }

    return 0;
}