#include <iostream>
#include <vector>

using namespace std;

int answer = -1;

void dfs(vector<vector<int>>& graph, vector<bool>& visited, int start, int end, int n)
{
    visited[start] = true;

    if (start == end) 
    {
        answer = n;
    }

    for (int i = 1; i < graph.size(); ++i)
    {
        if (graph[start][i] && !visited[i])
        {
            dfs(graph, visited, i, end, n + 1);
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, t1, t2;
    cin >> n >> t1 >> t2 >> m;
    
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
    vector<bool> visited(n + 1, false);
    
    for (int i = 0; i < m; ++i)
    {
        int x, y; cin >> x >> y;
        graph[x][y] = graph[y][x] = 1;
    }

    dfs(graph, visited, t1, t2, 0);
    
    cout << answer;

    return 0;
}