#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    vector<int> student(n * 2);
    for (int i = 0; i < n * 2; ++i)
    {
        cin >> student[i];
    }
    sort(student.begin(), student.end());

    vector<int> answer(n);
    for (int i = 0; i < n; ++i)
    {
        answer[i] = student[i] + student[n * 2 - i - 1];
    }
    sort(answer.begin(), answer.end());
    
    cout << answer[0];
    return 0;
}