#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<char>> board;
int x, y;
int n;

void PrintBoard();
void MoveUp();
void MoveDown();
void MoveLeft();
void MoveRight();

void Solution()
{
	string str; cin >> str;

	for (char c : str)
	{
		switch (c)
		{
		case 'U':
			MoveUp();
			break;
		case 'D':
			MoveDown();
			break;
		case 'L':
			MoveLeft();
			break;
		case 'R':
			MoveRight();
			break;
		}
	}

	PrintBoard();
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	board.resize(n, vector<char>(n, 46));
	Solution();

	return 0;
}

void PrintBoard()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << board[i][j];
		}
		cout << "\n";
	}
}

void MoveUp()
{
	if (y - 1 >= 0)
	{
		if (board[y][x] == '.' || board[y][x] == '|')
		{
			board[y][x] = '|';
		}
		else
		{
			board[y][x] = '+';
		}

		y--;
		if (board[y][x] == '.' || board[y][x] == '|')
		{
			board[y][x] = '|';
		}
		else
		{
			board[y][x] = '+';
		}
	}
}

void MoveDown()
{
	if (y + 1 < n)
	{
		if (board[y][x] == '.' || board[y][x] == '|')
		{
			board[y][x] = '|';
		}
		else
		{
			board[y][x] = '+';
		}

		y++;
		if (board[y][x] == '.' || board[y][x] == '|')
		{
			board[y][x] = '|';
		}
		else
		{
			board[y][x] = '+';
		}
	}
}

void MoveLeft()
{
	if (x - 1 >= 0)
	{
		if (board[y][x] == '.' || board[y][x] == '-')
		{
			board[y][x] = '-';
		}
		else
		{
			board[y][x] = '+';
		}

		x--;
		if (board[y][x] == '.' || board[y][x] == '-')
		{
			board[y][x] = '-';
		}
		else
		{
			board[y][x] = '+';
		}
	}
}

void MoveRight()
{
	if (x + 1 < n)
	{
		if (board[y][x] == '.' || board[y][x] == '-')
		{
			board[y][x] = '-';
		}
		else
		{
			board[y][x] = '+';
		}

		x++;
		if (board[y][x] == '.' || board[y][x] == '-')
		{
			board[y][x] = '-';
		}
		else
		{
			board[y][x] = '+';
		}
	}
}