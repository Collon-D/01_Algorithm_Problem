#include <iostream>

using namespace std;

bool is_triangle(int a, int b, int c) {
    return (a + b) > c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int num; cin >> num;

    int cnt = 0;
    for (int i = 1; i <= num / 3; ++i) {
        for (int j = i; j <= num - i - j; ++j) {
            int k = num - i - j;

            cnt += is_triangle(i, j, k) ? 1 : 0;
        }
    }

    cout << cnt;
    return 0;
}