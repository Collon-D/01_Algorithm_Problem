#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int odd_sum = 0, n = 0, min = 101;
    for (int i = 0; i < 7; ++i) {
        cin >> n;
        odd_sum += n & 1 ? n : 0;
        if (n & 1 && min > n) min = n; 
    }

    if (odd_sum == 0) cout << -1;
    else cout << odd_sum << "\n" << min;
}