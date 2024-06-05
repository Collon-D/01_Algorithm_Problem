#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m, answer = 0; cin >> n >> m;
	string str; cin >> str;

	for (int i = 0; i < m; ++i)
	{
		int k = 0;
		
		if (str[i] == 'O')
		{
			continue;
		}
		else
		{
			while (str[i + 1] == 'O' && str[i + 2] == 'I')
			{
				k++;
				if (k == n)
				{
					k--;
					answer++;
				}
				i += 2;
			}
			k = 0;
		}
	}

	cout << answer;
	return 0;
}