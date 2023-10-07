#include <iostream>

using namespace std;

void isPrime(int num) {
    if (num == 1) { return; }
    
    if (num == 2) {
        cout << num << "\n";
        return;
    }
    bool prime = true;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) cout << num << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int M, N; cin >> M >> N;
    for (int i = M; i <= N; ++i) {
        isPrime(i);    
    }

    return 0;
}