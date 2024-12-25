#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Rev(string x)
{
    reverse(x.begin(), x.end());
    return stoi(x);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x, y; cin >> x >> y;
    cout << Rev(to_string(Rev(x) + Rev(y)));

    return 0;
}