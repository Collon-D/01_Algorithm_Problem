#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <map>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	vector<deque<char>> vec(n, deque<char>());
	map<string, bool> answer;
	for (int i = 0; i < n; ++i)
	{
		string tmp; cin >> tmp;

		for (int j = 0; j < tmp.size(); ++j)
		{
			vec[i].push_back(tmp[j]);
		}

		if (answer.empty())
		{
			answer.insert({tmp, true});
		}
		else
		{
			bool check = false;

			for (int j = 0; j < tmp.size(); ++j)
			{
				char c = vec[i].front();
				vec[i].push_back(c);
				vec[i].pop_front();

				string str = "";
				for (int k = 0; k < vec[i].size(); ++k)
					str += vec[i][k];
				
				if (answer.find(str) != answer.end())
					check = true;
			}

			if (!check) 
			{
				answer.insert({tmp, true});
			}
		}
	}

	cout << answer.size();
	return 0;
}