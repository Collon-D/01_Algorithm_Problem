#include <iostream>
#include <cmath>

#define SIZE 246913

using namespace std;

bool prime_num[SIZE];

void solution() {
    for (int i = 2; i < SIZE; i++) 
        prime_num[i] = true;

    for (int i = 2; i * i < SIZE; i++) {
        if (prime_num[i]) {
            for (int k = i * i; k < SIZE; k += i) {
                prime_num[k] = false;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    solution();

    int n = 1, answer = 0;
    while (true) {
        answer = 0;
        cin >> n;
        if (n == 0) break;
        
        for (int i = n + 1; i <= 2 * n; ++i) {
            if (prime_num[i]) answer++;
        }
        
        cout << answer << "\n";
    }

    return 0;
}