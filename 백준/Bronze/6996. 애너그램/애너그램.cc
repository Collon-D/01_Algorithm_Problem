#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Solution()
{
    int n; cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string str1, str2;
        cin >> str1 >> str2;

        string answer = str1 + " & " + str2;

        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1.compare(str2) == 0)
        {
            cout << answer << " are anagrams.\n";
        }
        else 
        {
            cout << answer << " are NOT anagrams.\n";
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution();

    return 0;
}