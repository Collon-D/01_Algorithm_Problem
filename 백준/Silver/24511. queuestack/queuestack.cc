#include <iostream>
#include <deque>

using namespace std;

bool flag[100001];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, tmp;
    deque<int> DQ;

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> flag[i];

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        
        if (!flag[i]) 
            DQ.push_back(tmp);
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        DQ.push_front(tmp);
        cout << DQ.back() << " ";
        DQ.pop_back();
    }

    return 0;
}