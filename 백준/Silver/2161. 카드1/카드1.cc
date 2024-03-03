#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        dq.push_back(i + 1);
    }

    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
    }

    return 0;
}