#include <iostream>
#include <cmath>
#include <deque>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, answer = 0, tmp;
    cin >> n >> m;

    deque<int> dq, arr;

    for (int i = 0; i < n; ++i) {
        dq.push_back(i + 1);
    }

    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        arr.push_back(tmp);
    }

    while (!arr.empty()) {
        int lvalue = 0, rvalue = 0;
        
        if (arr.front() == dq.front()) {
            arr.pop_front();
            dq.pop_front();
        }
        else {
            deque<int> left = dq;
            deque<int> right = dq;

            while (true) {
                if (arr.front() == right.front()) {
                    break;
                }
                right.push_back(right.front());
                right.pop_front();
                rvalue++;
            }

            while (true) {
                if (arr.front() == left.front()) {
                    break;
                }
                left.push_front(left.back());
                left.pop_back();
                lvalue++;
            }

            if (lvalue > rvalue) {
                answer += rvalue;
                dq = right;
            }
            else {
                answer += lvalue;
                dq = left;
            }
        }
    }
    
    cout << answer;
    return 0;
}