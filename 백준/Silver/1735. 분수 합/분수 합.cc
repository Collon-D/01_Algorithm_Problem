#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int num[4], answer[2], tmp[4];
    cin >> num[0] >> num [1] >> num[2] >> num[3];

    tmp[0] = num[0] * num[3];
    tmp[1] = num[1] * num[3];
    tmp[2] = num[2] * num[1];
    tmp[3] = num[3] * num[1];

    int mole = tmp[0] + tmp[2];
    int demo = tmp[1];

    answer[0] = mole / gcd(mole, demo);
    answer[1] = demo / gcd(mole, demo);

    cout << answer[0] << " " << answer[1] << "\n";

    return 0;
}