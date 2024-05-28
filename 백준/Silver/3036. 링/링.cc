#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; ++i)
    {
        int GCD = gcd(arr[0], arr[i]);
        cout << arr[0] / GCD << "/" << arr[i] / GCD << "\n";
    }

    return 0;
}