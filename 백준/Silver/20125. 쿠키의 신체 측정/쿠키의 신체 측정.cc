#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    pair<int, int> heart;
    int body[5] = { 0, };

    bool check = false;
    for (int i = 0; i < n && !check; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] == '*') {
                heart.first = i + 1;
                heart.second = j;
                check = true;
                break;
            }
        }
    }

    for (int i = heart.second - 1; i >= 0; --i) {
        if (arr[heart.first][i] == '*') {
            body[0]++;
        }
        else break;
    }

    for (int i = heart.second + 1; i < n; ++i) {
        if (arr[heart.first][i] == '*') {
            body[1]++;
        }
        else break;
    }

    pair<int, int> end_point;
    for (int i = heart.first + 1; i < n; ++i) {
        if (arr[i][heart.second] == '*') {
            body[2]++;
        }
        else {
            end_point.first = i;
            end_point.second = heart.second;
            break;
        }
    }

    for (int i = end_point.first; i < n; ++i) {
        if (arr[i][end_point.second - 1] == '*') {
            body[3]++;
        }
        else break;
    }

    for (int i = end_point.first; i < n; ++i) {
        if (arr[i][end_point.second + 1] == '*') {
            body[4]++;
        }
        else break;
    }

    cout << heart.first + 1 << " " << heart.second + 1 << "\n";
    for (int i = 0; i < 5; ++i) {
        cout << body[i] << " ";
    }

    return 0;
}