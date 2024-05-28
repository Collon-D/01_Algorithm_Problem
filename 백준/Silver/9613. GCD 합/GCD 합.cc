#include <iostream>
#include <vector>

using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t, n; cin >> t;
    vector<int> arr(100);
    
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        ll answer = 0;

        for (int j = 0; j < n; ++j)
        {
            cin >> arr[j];
        }

        for (int j = 0; j < n - 1; ++j) 
        {
            for (int k = j + 1; k < n; ++k)
            {
                answer += gcd(arr[j], arr[k]);
            }
        }

        cout << answer << "\n";
    }

    return 0;
}