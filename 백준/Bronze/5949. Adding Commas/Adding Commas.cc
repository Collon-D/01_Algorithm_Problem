#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    stack<char> st;
    int cnt = 0;
    string str, answer = ""; cin >> str;

    for (auto c : str)
    {
        st.push(c);
    }

    while (!st.empty())
    {
        cnt++;
        answer += st.top();
        st.pop();       
        if (cnt == 3 && !st.empty())
        {
            cnt = 0;
            answer += ',';
        }
    }
    reverse(answer.begin(), answer.end());

    cout << answer;
    return 0;
}