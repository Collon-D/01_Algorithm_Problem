#include <iostream>
#include <string>

using namespace std;

const int H = 5;
const int W = 3;

char digit_clock[10][H][W] =
{
	{ /// 0
		'#', '#', '#',
		'#', '.', '#',
		'#', '.', '#',
		'#', '.', '#',
		'#', '#', '#'
	},
	{ /// 1
		'.', '.', '#',
		'.', '.', '#',
		'.', '.', '#',
		'.', '.', '#',
		'.', '.', '#'
	},
	{ /// 2
		'#', '#', '#',
		'.', '.', '#',
		'#', '#', '#',
		'#', '.', '.',
		'#', '#', '#'
	},
	{ /// 3
		'#', '#', '#',
		'.', '.', '#',
		'#', '#', '#',
		'.', '.', '#',
		'#', '#', '#'
	},
	{ /// 4
		'#', '.', '#',
		'#', '.', '#',
		'#', '#', '#',
		'.', '.', '#',
		'.', '.', '#'
	},
	{ /// 5
		'#', '#', '#',
		'#', '.', '.',
		'#', '#', '#',
		'.', '.', '#',
		'#', '#', '#'
	},
	{ /// 6
		'#', '#', '#',
		'#', '.', '.',
		'#', '#', '#',
		'#', '.', '#',
		'#', '#', '#'
	},
	{ /// 7
		'#', '#', '#',
		'.', '.', '#',
		'.', '.', '#',
		'.', '.', '#',
		'.', '.', '#'
	},
	{ /// 8
		'#', '#', '#',
		'#', '.', '#',
		'#', '#', '#',
		'#', '.', '#',
		'#', '#', '#'
	},
	{
		'#', '#', '#',
		'#', '.', '#',
		'#', '#', '#',
		'.', '.', '#',
		'#', '#', '#'
	}
};

string input[5][4];

int CompareTime(int column)
{
	int answer = -1;
	int max_count = 0;

	for (int i = 0; i < 10; i++)
	{
		int cur_count = 0;

		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				char comp = input[j][column][k];
				char origin = digit_clock[i][j][k];
				
				if (comp == '#' && origin == '#')
					cur_count++;
			}
		}

		if (max_count < cur_count)
		{
			max_count = cur_count;
			answer = i;
		}
	}

	return answer;
}

void Solution()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> input[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		if (i == 2) cout << ":";
		cout << CompareTime(i);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	Solution();

	return 0;
}