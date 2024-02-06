#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, tmp1, tmp2, answer = 0;
    cin >> n;

    vector<int> A(n), B(n);
    vector<bool> check(n, true);

    for (int i = 0; i < n; ++i) {
        cin >> tmp1;
        A[i] = tmp1;
    }
    sort(A.begin(), A.end());

    for (int i = 0; i < n; ++i) {
        cin >> tmp2;
        B[i] = tmp2;
    }

    for (int i = 0; i < n; ++i) {
        int big_num = 0, idx = 0;
        for (int j = 0; j < n; ++j) {
            if (check[j] && big_num < B[j]) {
                big_num = B[j];
                idx = j;
            }    
        }
        check[idx] = false;
        answer += A[i] * big_num;
    }

    cout << answer;
    return 0;
}