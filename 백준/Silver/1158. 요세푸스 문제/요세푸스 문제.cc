#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        dq.push_back(i + 1);
    }

    cout << "<";
    while (dq.size() != 1) {
        int val = 0;
        for (int i = 0; i < k - 1; ++i) {
            val = dq.front();
            dq.pop_front();
            dq.push_back(val);
        }
        val = dq.front();
        dq.pop_front();
        cout << val << ", ";
    }
    
    cout << dq.front() << ">";

    return 0;
}