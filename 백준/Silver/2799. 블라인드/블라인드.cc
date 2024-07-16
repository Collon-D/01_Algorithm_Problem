#include <iostream>
#include <vector>

using namespace std;

char blind[5][4][4] = {
	{
		{'.', '.', '.', '.'},
		{'.', '.', '.', '.'},
		{'.', '.', '.', '.'},
		{'.', '.', '.', '.'}
	},
	{
		{'*', '*', '*', '*'},
		{'.', '.', '.', '.'},
		{'.', '.', '.', '.'},
		{'.', '.', '.', '.'}
	},
	{
		{'*', '*', '*', '*'},
		{'*', '*', '*', '*'},
		{'.', '.', '.', '.'},
		{'.', '.', '.', '.'}
	},
	{
		{'*', '*', '*', '*'},
		{'*', '*', '*', '*'},
		{'*', '*', '*', '*'},
		{'.', '.', '.', '.'}
	},
	{
		{'*', '*', '*', '*'},
		{'*', '*', '*', '*'},
		{'*', '*', '*', '*'},
		{'*', '*', '*', '*'}
	}
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int m, n; cin >> m >> n;
	int m_size = 5 * m + 1;
	int n_size = 5 * n + 1;

	vector<vector<char>> input(m_size, vector<char>(n_size, 0));
	vector<int> answer(5, 0);

	for (int i = 0; i < m_size; ++i)
	{
		for (int j = 0; j < n_size; ++j)
		{
			cin >> input[i][j];
		}
	}

	for (int i = 1; i < m_size; i += 5)
	{
		for (int j = 1; j < n_size; j += 5)
		{
			for (int k = 0; k < 5; ++k) 
			{
				bool check = false;

				for (int x = 0; x < 4; ++x)
				{
					for (int y = 0; y < 4; ++y)
					{
						if (input[i + x][j + y] != blind[k][x][y]) 
						{
							check = true;
							break;
						}
					}
				}

				if (!check) answer[k]++;
			}
		}
	}


	for (int i = 0; i < 5; ++i)
		cout << answer[i] << " ";

	return 0;
}