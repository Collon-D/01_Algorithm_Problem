#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr); 

	int n, cnt = 1;
	while (true)
	{
		cin >> n;
		if (n == 0) break;

		vector<string> name(n);
		vector<vector<char>> message(n, vector<char>(n - 1));
		for (int i = 0; i < n; ++i)
		{
			cin >> name[i];
			for (int j = 0; j < n - 1; ++j)
			{
				cin >> message[i][j];
			}
		}

		bool check = false;

		cout << "Group " << cnt++ << "\n";
		for (int i = 0; i < n; ++i)
		{
			int tmp = ((i - 1) < 0) ? (i - 1) % n + n : (i - 1) % n;
			for (int j = 0; j < n - 1; ++j)
			{
				if (message[i][j] == 'N') 
				{
					cout << name[tmp] << " was nasty about " << name[i] << "\n";
					check = true;
				}

				tmp = (tmp - 1) < 0 ? (tmp - 1) % n + n : (tmp - 1) % n;
			}

		}

		if (!check) 
		{
			cout << "Nobody was nasty\n";
		}
		cout << "\n";
	}

	return 0;
}