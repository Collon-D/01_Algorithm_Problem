#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define ULL     unsigned long long
#define DIVISOR 1234567891

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N; cin >> N;
    string tmp; cin >> tmp;
    ULL answer = 0;

    for (int i = 0; i < N; ++i) {
        ULL multy = 1;
        if (i == 0) 
            answer += (tmp[i] - 'a' + 1) *  1;
        else {
            for (int j = 0; j < i; ++j) {
                multy *= 31;
                multy %= DIVISOR;
            }
            answer += (tmp[i] - 'a' + 1) * multy; 
        }
    }
    answer %= DIVISOR;
    cout << answer;

    return 0;
}