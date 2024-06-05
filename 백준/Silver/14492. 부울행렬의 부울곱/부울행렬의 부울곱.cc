#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, answer = 0; cin >> n;
	vector<vector<int>> A(n, vector<int>(n));
	vector<vector<int>> B(n, vector<int>(n));
	vector<vector<int>> C(n, vector<int>(n, 0));

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				int tmp = A[i][k] && B[k][j];
				C[i][j] = C[i][j] || tmp;
			}
			
			answer += C[i][j] == 1 ? 1 : 0;
		}
	}

	cout << answer;
	return 0;
}