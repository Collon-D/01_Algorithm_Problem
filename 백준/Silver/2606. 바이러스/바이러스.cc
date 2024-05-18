#include <iostream>

using namespace std;

int arr[101][101];
int visited[101];
int n, m, answer;

void dfs(int start)
{
    visited[start] = 1;

    for (int i = 1; i <= n; ++i) 
    {
        if (!visited[i] && arr[start][i] == 1)
        {
            answer++;
            dfs(i);
        }
    }

    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        arr[x][y] = arr[y][x] = 1;
    }

    dfs(1);

    cout << answer;
    return 0;
}