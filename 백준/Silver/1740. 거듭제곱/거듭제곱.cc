#include <iostream>
#include <vector>

using namespace std;

long long Power(long long a, long long b)
{
    long long res = 1;
    for (long long i = 0; i < b; i++)
    {
        res *= a;
    }

    return res;
}

long long Solution(long long n)
{
    long long answer = 0;

    vector<bool> binaray;

    // 입력받은 수 n을 이진수로 변환
    while (n > 0)
    {
        bool val = n % 2 == 1 ? true : false;
        binaray.push_back(val);
        n /= 2;
    }

    // 변환된 이진수에서 1이 나타난 위치마다 3의 거듭 제곱 후 더하기(역순)
    for (int i = 0; i < binaray.size(); i++)
    {
        if (binaray[i])
        {
            answer += Power(3, i); 
        }
    }

    return answer;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;
    cout << Solution(n);

    return 0;
}