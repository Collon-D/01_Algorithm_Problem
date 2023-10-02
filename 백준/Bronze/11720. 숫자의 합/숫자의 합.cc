#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, answer = 0;
    string str;
    cin >> N;
    cin >> str;
    for (int i = 0; i < N; ++i) 
        answer += str[i] - '0'; 
    cout << answer;   

    return 0;
}