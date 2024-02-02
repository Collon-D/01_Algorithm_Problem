#include <iostream>

using namespace std;

#define ll long long int

ll solution(ll n) {
    if (n == 0) return 1;
    return n * solution(n - 1);
}

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll n;
    cin >> n;
    cout << solution(n);

    return 0;
}