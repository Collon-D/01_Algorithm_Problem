#include <iostream>
#include <queue>
#include <cmath>
#include <vector>

using namespace std;

struct compare {
    bool operator() (int a, int b) {
        if (abs(a) == abs(b)) {
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    priority_queue<int, vector<int>, compare> pq;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x;

        if (x == 0) {
            if (pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();    
            }
        }
        else {
            pq.push(x);
        }
    }

    return 0;
}
