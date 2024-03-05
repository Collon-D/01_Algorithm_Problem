#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        vector<int> arr(10);
        for (int i = 0; i < 10; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        cout << arr[7] << "\n";
    }

    return 0;
}