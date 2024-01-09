#include <iostream>

#define SIZE 1000001

using namespace std;

int prime_num[SIZE];

void setup() {
    for (int i = 2; i < SIZE; ++i) {
        prime_num[i] = i;
    }
    
    for (int i = 2; i < SIZE; ++i) {
        if (prime_num[i] == 0) continue;

        for (int j = 2 * i; j < SIZE; j += i) {
            prime_num[j] = 0;
        }
    }
}

int solution(int n) {
    int answer = 0;

    for (int i = n; i >= 2; --i) {
        if (prime_num[i] != 0 && prime_num[n - prime_num[i]] != 0) {
            answer += (n == prime_num[i] + (n - prime_num[i])) ? 1 : 0;
        }
    }

    if (answer & 1) answer = answer / 2 + 1;
    else answer /= 2;

    return answer;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    setup();

    int T, N;

    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> N;
        cout << solution(N) << "\n";
    }

    return 0;
}