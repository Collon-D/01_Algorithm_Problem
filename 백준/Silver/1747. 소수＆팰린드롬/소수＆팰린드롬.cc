#include <iostream>
#include <string>

using namespace std;

#define MAX 1100000

bool IsPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool IsPaildrome(int n)
{
    string str = to_string(n);
    int len = str.size() / 2;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
            return false;
    }
    return true;
}

int Solution(int n)
{
    if (n == 1) return 2;
    int answer = 0;

    for (int i = n; i < MAX + 1; i++)
    {
        if (IsPrime(i) && IsPaildrome(i))
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    cout << Solution(n);

    return 0;
}