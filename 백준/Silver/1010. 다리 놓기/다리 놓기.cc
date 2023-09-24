#include <iostream>

using namespace std;

unsigned long long pascal_triangle[31][31] = {
    { 0, }, 
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 31; ++i) {
        pascal_triangle[i][0] = pascal_triangle[i][i] = 1;
    }
    for (int i = 1; i < 31; ++i) {
        for (int j = 1; j < i; ++j) {
            pascal_triangle[i][j] = pascal_triangle[i - 1][j] + pascal_triangle[i - 1][j - 1];
        }
    }

    int T, N, M;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> N >> M;
        cout << pascal_triangle[M][N] << "\n";
    }

    return 0;
}