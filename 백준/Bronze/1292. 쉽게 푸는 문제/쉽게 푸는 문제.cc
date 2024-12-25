#include <iostream>

using namespace std;

#define MAX 1000 + 1

int arr[MAX];

int Solution(int a, int b)
{
    int answer = 0;

    int cnt = 1;
    for (int i = 1; i < MAX; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (cnt == MAX) break;

            arr[cnt] = i;
            cnt++;
        }
    }

    for (int i = a; i <= b; i++)
    {
        answer += arr[i];
    }

    return answer;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    cout << Solution(a, b);

    return 0;
}