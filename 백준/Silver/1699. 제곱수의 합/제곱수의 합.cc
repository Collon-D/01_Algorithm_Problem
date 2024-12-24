#include <iostream>

using namespace std;

#define MAX 100000 + 1 

int DP[MAX];

inline int Min(int a, int b)
{
    return a > b ? b : a;
}

int Solution(int n)
{
    for (int i = 1; i <= n; i++)
    {
        DP[i] = i;
        for (int j = 1; j * j <= i; j++)
        {
            DP[i] = Min(DP[i], DP[i - j * j] + 1);
        }
    }

    int answer = DP[n];
    return answer;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << Solution(n);

    return 0;
}