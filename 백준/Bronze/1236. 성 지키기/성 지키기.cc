#include <iostream>
#include <vector>

using namespace std;

int Solution(int n, int m)
{
	int answer = 0;
	vector<vector<char>> arr(n, vector<char>(m, ' '));

	vector<bool> row(n, false);
	vector<bool> col(m, false);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'X')
			{
				row[i] = true;
				col[j] = true;
			}
		}
	}

	int row_false = 0;
	for (bool b : row)
	{
		row_false += !b ? 1 : 0;
	}

	int col_false = 0;
	for (bool b : col)
	{
		col_false += !b ? 1 : 0;
	}
	
	answer = row_false > col_false ? row_false : col_false;
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m; cin >> n >> m;
	cout << Solution(n, m);

	return 0;
}
