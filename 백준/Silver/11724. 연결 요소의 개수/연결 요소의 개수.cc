#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& _graph, vector<bool>& _visited, int _start)
{
    _visited[_start] = true;
    for (int i = 1; i < _graph.size(); ++i) 
    {
        if (_graph[_start][i] == 1 && !_visited[i]) 
        {
            dfs(_graph, _visited, i);
        }
    }

    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, answer = 0; cin >> n >> m;

    vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
    vector<bool> visited(n + 1, false);

    int x, y;
    for (int i = 0; i < m; ++i) 
    {
        cin >> x >> y;
        graph[x][y] = graph[y][x] = 1;
    }

    for (int i = 1; i <= n; ++i) 
    {
        if (!visited[i]) 
        {
            answer++;
            dfs(graph, visited, i);
        }
    }

    cout << answer;
    return 0;
}