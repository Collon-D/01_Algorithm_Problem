#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs(vector<vector<int>> &v, int start,int n) {
	vector<int> dist(n+1,-1);
	queue<int> q;
	q.push(start);
	dist[start] = 0;
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		for (int i = 0; i < v[cur].size(); i++) {
			int nxt = v[cur][i];
			if (dist[nxt] != -1) continue;
			dist[nxt] = dist[cur] + 1;
			q.push(nxt);
		}
	}
	int sum = 0;
	for (int i = 1; i <= n;i++) {
		sum += dist[i];
	}
	return sum;
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> v(n+1);
	vector<int> kevin(n+1);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int min_kevin = 987654321;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		kevin[i] = bfs(v, i, n);
		if (kevin[i] < min_kevin) {
			min_kevin = kevin[i];
			ans = i;
		}
	}
	cout << ans;
	return 0;
}