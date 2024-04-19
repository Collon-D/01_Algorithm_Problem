#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int h, w, x, y; 
    cin >> h >> w >> x >> y;

    vector<vector<int>> b(h + x, vector<int>(w + y));

    for (int i = 0; i < h + x; ++i) {
        for (int j = 0; j < w + y; ++j) {
            cin >> b[i][j];
        }
    }

    for (int i = x; i < h; ++i) {
        for (int j = y; j < w; ++j) {
            b[i][j] -= b[i - x][j - y];
        }
    }

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}