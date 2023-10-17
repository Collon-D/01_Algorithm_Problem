#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int DP[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n; cin >> n;
    int answer = 0;
    vector<int> input(n);
    for (int i = 0; i < n; ++i) 
        cin >> input[i];
    sort(input.begin(), input.end());
    
    DP[1] = input[0];
    for (int i = 1; i < n; ++i) {
        DP[i + 1] = DP[i] + input[i];
    }

    for (int i = 0; i < n; ++i) {
        answer += DP[i + 1];
    }
    cout << answer;

    return 0;
}