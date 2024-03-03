#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int a, b, tmp;
    cin >> a >> b;

    vector<int> arr;
    for (int i = 0; i < a; ++i) {
        cin >> tmp;
        arr.push_back(tmp);
    }

    for (int i = 0; i < b; ++i) {
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); ++i) 
        cout << arr[i] << " ";

    return 0;
}