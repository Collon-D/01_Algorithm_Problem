#include <iostream>
#include <vector>

using namespace std;

int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };
int t, n, m, k;

void dfs(vector<vector<int>>& graph, vector<vector<int>>& visited, int y, int x)
{
	for (int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= n || nx < 0 || nx >= m)
			continue;
		
		if (graph[ny][nx] && !visited[ny][nx])
		{
			visited[ny][nx]++;
			dfs(graph, visited, ny, nx);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> n >> m >> k;
		vector<vector<int>> graph(n, vector<int>(m, 0));
		vector<vector<int>> visited(n, vector<int>(m, 0));

		int answer = 0;
		for (int j = 0; j < k; ++j)
		{
			int x, y; cin >> x >> y;
			graph[x][y] = 1;
		}

		// solution
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (graph[i][j] && !visited[i][j])
				{
					answer++;
					visited[i][j]++;
					dfs(graph, visited, i, j);
				}
			}
		}

		cout << answer << "\n";
	}
	
	return 0;
}