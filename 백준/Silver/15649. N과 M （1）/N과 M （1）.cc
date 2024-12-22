#include <iostream>

using namespace std;

int n, m;
int arr[9];
bool visited[9];

void dfs(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            arr[k] = i;
            visited[i] = true;
            dfs(k + 1);
            visited[i] = false;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    dfs(0);

    return 0;
}