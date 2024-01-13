#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0; 
    
    for (int i = 1; i * i <= n; ++i) {
        answer++;
    }

    return answer;
}

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N;
    cin >> N;
    cout << solution(N);

    return 0;
}