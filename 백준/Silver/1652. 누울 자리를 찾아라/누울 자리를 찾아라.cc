#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	int ans1 = 0, ans2 = 0;

	vector<string> width;
	for (int i = 0; i < n; ++i)
	{
		string str; cin >> str;
		width.push_back(str);
		
		string tmp = "";
		vector<string> tmp_str;
		for (int j = 0; j < n; ++j)
		{
			if (width[i][j] == 'X') 
			{
				tmp_str.push_back(tmp);
				tmp = "";
				continue;
			}
			tmp += width[i][j];
		}
		tmp_str.push_back(tmp);

		for (int j = 0; j < tmp_str.size(); ++j)
		{
			ans1 += tmp_str[j].find("..") != string::npos ? 1 : 0;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		string tmp = "";
		vector<string> tmp_str;
		for (int j = 0; j < n; ++j)
		{
			if (width[j][i] == 'X') 
			{
				tmp_str.push_back(tmp);
				tmp = "";
				continue;
			}
			tmp += width[j][i];
		}
		tmp_str.push_back(tmp);

		for (int j = 0; j < tmp_str.size(); ++j)
		{
			ans2 += tmp_str[j].find("..") != string::npos ? 1 : 0;
		}
	}

	cout << ans1 << " " << ans2;
	return 0;
}