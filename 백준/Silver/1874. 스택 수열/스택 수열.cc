#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    string answer = "";
    int n; cin >> n;
    
    stack<int> ST;
    vector<int> input(n);
    for (int i = 0; i < n; ++i) 
        cin >> input[i];
    
    int idx = 0, value = 1;
    while (value <= n) {
        ST.push(value++);
        answer += "+";

        while (!ST.empty() && input[idx] == ST.top()) {
            ST.pop();
            answer += "-";
            idx++;
        }
    }

    if (ST.empty()) {
        for (int i = 0; i < answer.size(); ++i) 
            cout << answer[i] << "\n";
    }
    else cout << "NO";

    return 0;
}