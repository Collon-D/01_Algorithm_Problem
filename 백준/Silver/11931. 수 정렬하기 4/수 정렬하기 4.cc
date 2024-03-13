#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 0; i < n; ++i)
        cout << arr[i] << "\n";

    return 0;
}