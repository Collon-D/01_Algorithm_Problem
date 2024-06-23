#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str, target;
    getline(cin, str);
    getline(cin, target);

    int answer = 0;
    int length = str.size(), size = target.size();
    int next = 1;
    for (int i = 0; i < length; i += next)
    {
        string tmp1 = "", tmp2 = "";
        for (int j = 0; j < size; ++j)
        {
            tmp1 += str[i + j];
            tmp2 += target[j];
        }

        if (tmp1 == tmp2) 
        {
            answer++;
            next = size;
        }
        else next = 1;
    }
    
    cout << answer;
    return 0;
}