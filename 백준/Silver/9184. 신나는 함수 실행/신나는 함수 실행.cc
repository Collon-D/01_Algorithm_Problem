#include <iostream>

using namespace std;

int DP[21][21][21];

int solution(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    else if (a > 20 || b > 20 || c > 20) return solution(20, 20, 20);
    else if (DP[a][b][c] != 0) return DP[a][b][c];
    else if (a < b && b < c) {
        DP[a][b][c] = solution(a, b, c - 1) + solution(a, b - 1, c - 1) - solution(a, b - 1, c);
    }
    else {
        DP[a][b][c] = solution(a - 1, b, c) + solution(a - 1, b - 1, c) + solution(a - 1, b, c - 1) - solution(a - 1, b - 1, c - 1);
    }
    return DP[a][b][c];
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int a, b, c; 
    while (true) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << solution(a, b, c) << "\n";
    }

    return 0;
}