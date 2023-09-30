#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    queue<int> answer;

    for (int i = 0; i < N; ++i)
        answer.push(i + 1);
    
    while (answer.size() != 1) {
        answer.pop();
        answer.push(answer.front());
        answer.pop();
    }

    cout << answer.front();
    return 0;
}