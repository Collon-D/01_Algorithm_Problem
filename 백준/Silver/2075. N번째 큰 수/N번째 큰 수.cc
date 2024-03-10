#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, tmp;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> tmp;
            if (i == 0) pq.push(tmp);
            else {
                if (tmp > pq.top()) {
                    pq.pop();
                    pq.push(tmp);
                }
            }
        }
    }

    cout << pq.top();
    return 0;
}