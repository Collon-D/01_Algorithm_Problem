#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K, answer = 1;
    cin >> N >> K;

    for (int i = N; i > N - K; --i) 
        answer *= i;
    for (int i = K; i > 1; --i)
        answer /= i;

    cout << answer;

    return 0;
}