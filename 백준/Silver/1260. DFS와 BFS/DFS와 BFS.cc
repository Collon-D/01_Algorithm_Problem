#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void dfs(vector<vector<int>>& graph, vector<bool>& visited, int start)
{
    visited[start] = true;
    cout << start << " ";

    int n = graph.size();
    for (int i = 1; i < n; ++i)
    {
        if (graph[start][i] && !visited[i]) 
        {
            dfs(graph, visited, i);
        }
    }
}

void bfs(vector<vector<int>>& graph, vector<bool>& visited, int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        
        int n = graph.size();
        for (int i = 1; i < n; ++i)
        {  
            if (graph[x][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, v; cin >> n >> m >> v;
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
    vector<bool> visited_dfs(n + 1, false);
    vector<bool> visited_bfs(n + 1, false);

    for (int i = 0; i < m; ++i)
    {
        int a, b; cin >> a >> b;
        graph[a][b] = graph[b][a] = 1;
    }

    // DFS
    dfs(graph, visited_dfs, v);

    cout << "\n";
    // BFS
    bfs(graph, visited_bfs, v);

    return 0;
}