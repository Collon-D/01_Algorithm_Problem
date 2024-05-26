#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ll n, m, answer = 0; cin >> n >> m;
    vector<ll> arr(n, 0);

    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int cnt = 0;
    while (cnt < m)
    {
        ll tmp = arr[0] + arr[1];
        arr[0] = arr[1] = tmp;
        sort(arr.begin(), arr.end());
        cnt++;
    }

    for (int i = 0; i < n; ++i)
    {
        answer += arr[i];
    }

    cout << answer;
    return 0;
}