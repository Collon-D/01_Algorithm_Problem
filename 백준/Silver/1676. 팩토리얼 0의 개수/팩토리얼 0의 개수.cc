#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N; cin >> N;
    int num_2 = 0, num_5 = 0, num_10 = 0;
    int answer = 0;

    for (int i = 1; i <= N; ++i) {
        int tmp = i;
        while (true) {
            if (tmp % 10 == 0) {
                num_10++;
                tmp /= 10;
            }
            else if (tmp % 5 == 0) {
                num_5++;
                tmp /= 5;
            }
            else if (tmp % 2 == 0) {
                num_2++;
                tmp /= 2;
            }
            else break;
        }
    }

    answer = num_2 > num_5 ? num_10 + num_5 : num_10 + num_2;
    cout << answer;
    return 0;
}