#include <iostream>

using namespace std;

#define ll unsigned long long int

void swap(ll& a, ll& b) {
    ll tmp = a;
    a = b;
    b = tmp;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    
    int cnt = b - a - 1;
    if (a == b) cnt = 0;

    cout << cnt << "\n";
    for (int i = a + 1; i < b; ++i)
        cout << i << " ";

    return 0;
}