#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, tmp;
    cin >> n;
    vector<int> A(n), B(n), answer;
    vector<bool> check(n, true);

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        A[i] = B[i] = tmp;
    }
    sort(B.begin(), B.end());

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i] == B[j] && check[j]) {
                check[j] = false;
                answer.push_back(j);
                break;
            }
        }
    }

    for (int i = 0; i < answer.size(); ++i) 
        cout << answer[i] << " ";
    
    return 0;
}