#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, answer = 0; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int max = arr[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        while (max <= arr[i]) 
        {
            arr[i]--;
            answer++;
        }
        max = arr[i];
    }

    cout << answer;
    return 0;
}