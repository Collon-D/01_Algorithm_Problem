#include <iostream>

using namespace std;

#define size 2001

bool g_arr[size];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        g_arr[tmp + 1000] = true;
    }

    for (int i = 0; i < size; ++i) {
        if (g_arr[i]) cout << i - 1000 << " ";
    }

    return 0;
}