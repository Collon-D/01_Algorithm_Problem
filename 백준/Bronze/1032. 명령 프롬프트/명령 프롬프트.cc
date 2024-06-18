#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	string answer;

	for (int i = 0; i < n; ++i)
	{
		string tmp;
		cin >> tmp;

		if (i == 0)
		{
			answer = tmp;
		}
		else
		{
			for (int j = 0; j < tmp.size(); ++j)
			{
				if (tmp[j] != answer[j]) 
				{
					answer[j] = '?';
				}
			}
		}
	}

	cout << answer;
	return 0;
}