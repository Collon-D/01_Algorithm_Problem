#include <iostream>
#include <vector>

using namespace std;

int mansick(int second)
{
    return ((second / 60) + 1) * 15;
}

int youngsick(int second)
{
    return ((second / 30) + 1) * 10;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin >> n;
    vector<int> arr(n);
    int m = 0, y = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        m += mansick(arr[i]);
        y += youngsick(arr[i]);
    }

    if (m > y) 
    {
        cout << "Y " << y;
    }
    else if (m < y)
    {
        cout << "M " << m;
    }
    else 
    {
        cout << "Y M " << y;
    }

    return 0;
}