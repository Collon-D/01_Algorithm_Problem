#include <iostream>
#include <queue>

using namespace std;
#define size 100001

int n, k;
bool visited[size];

void bfs(int start)
{
	queue<pair<int, int>> Q;
	visited[start] = true;
	Q.push({start, 0});

	while (!Q.empty())
	{
		int x = Q.front().first;
		int cnt = Q.front().second;
		Q.pop();

		if (x == k)
		{
			cout << cnt;
			break;
		}

		if (0 <= x + 1 && x + 1 < size)
		{
			if (!visited[x + 1])
			{
				visited[x + 1] = true;
				Q.push({x + 1, cnt + 1});
			}
		}

		if (0 <= x - 1 && x - 1 < size)
		{
			if (!visited[x - 1])
			{
				visited[x - 1] = true;
				Q.push({x - 1, cnt + 1});
			}
		}

		if (0 <= x * 2 && x * 2 < size)
		{
			if (!visited[x * 2])
			{
				visited[x * 2] = true;
				Q.push({x * 2, cnt + 1});
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> k;
	bfs(n);

	return 0;
}