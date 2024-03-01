#include <iostream>

using namespace std;

int solution(int e, int s, int m) {
    int answer = 0;

    int a = 0, b = 0, c = 0;

    while (true) {
        a++; b++; c++; answer++;
        if (a > 15) a = 1;
        if (b > 28) b = 1;
        if (c > 19) c = 1;

        if (a == e && b == s && c == m) break;
    }

    return answer;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int e, s, m;
    cin >> e >> s >> m;

    cout << solution(e, s, m);
    return 0;
}