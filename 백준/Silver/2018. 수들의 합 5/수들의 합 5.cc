#include <iostream>

using namespace std;

// Solution by Two-Pointer Algorithm
int Solution(int n)
{
    int answer = 0;
    int start = 1, end = 1, sum = 1;

    while(end < n + 1)
    {
        if (sum < n)
        {
            end++;
            sum += end;
        }
        else if (sum > n)
        {
            sum -= start;
            start++;
        }
        else 
        {
            answer++;
            end++;
            sum += end;
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