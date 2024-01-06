#include <iostream>
#include <cmath>

#define UINT unsigned int

using namespace std;

UINT solution(UINT n) {
    if (n == 0 || n == 1) {
        return 2;
    }

    UINT answer =  0;
    bool isPrime = true;

    UINT tmp = n;
    while (true) {
        isPrime = true;
        
        for (UINT i = 2; i <= sqrt(tmp); ++i) {
            if (tmp % i == 0) {
                tmp++;
                isPrime = false;
                break;
            }
        }

        if (isPrime) break;
    }

    answer = tmp;
    return answer;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    UINT T, n;

    cin >> T;
    for (UINT i = 0; i < T; ++i) {
        cin >> n;
        cout << solution(n) << "\n";
    }

    return 0;
}