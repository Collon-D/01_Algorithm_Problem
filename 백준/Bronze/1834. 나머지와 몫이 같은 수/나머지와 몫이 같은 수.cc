#include <iostream>

using namespace std;

int64_t Solution(int n)
{
    int64_t sum = 0;

    int64_t Q = 1, R = 1;
    while (true)
    {
        if (n > R)
        {
            sum += (n * Q) + R;
            Q++; R++;
        }
        else break;
    }

    return sum;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cout << Solution(n); 

    return 0;
}