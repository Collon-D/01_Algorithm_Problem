#include <iostream>

using namespace std;

#define ll long long int

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll n, answer = 0; 
    cin >> n;
    
    for (int i = 1; i <= n; ++i) 
        answer += (n / i) * i;

    cout << answer;
    return 0;
}