#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int>& _vec) {
    int result = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            for (int k = j + 1; k < 5; ++k) {
                result = ( _vec[i] + _vec[j] + _vec[k]) % 10 > result ? ( _vec[i] + _vec[j] + _vec[k]) % 10 : result;
            }
        }
    }

    return result;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n, answer = 0, value = 0; cin >> n;
    vector<vector<int>> card(n, vector<int>(5));
    vector<int> card_value(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> card[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        card_value[i] = solve(card[i]);
        if (value <= card_value[i]) {
            value = card_value[i];
            answer = i + 1;
        }
    }

    cout << answer;
    return 0;
}