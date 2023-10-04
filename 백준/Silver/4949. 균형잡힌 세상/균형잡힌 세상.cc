#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string tmp;
    stack<char> ST;    

    while (true) {
        getline(cin, tmp);

        if (tmp == ".") break;
        while (!ST.empty()) { ST.pop(); }

        for (int i = 0; i < tmp.size(); ++i) {
            if (tmp[i] == '(' || tmp[i] == '[') ST.push(tmp[i]);

            else if (tmp[i] == ')') {
                if (ST.empty()) ST.push(tmp[i]);   
                else {
                    if (ST.top() == '(') ST.pop();
                    else ST.push(tmp[i]);
                }
            }
            else if (tmp[i] == ']') {
                if (ST.empty()) ST.push(tmp[i]);
                else {
                    if (ST.top() == '[') ST.pop();
                    else ST.push(tmp[i]);
                }
            }
        }

        if (ST.empty()) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}