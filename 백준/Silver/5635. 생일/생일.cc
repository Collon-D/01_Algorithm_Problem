#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, vector<int>> a, pair<string, vector<int>> b)
{
	if (a.second[2] < b.second[2])
	{
		return false;
	}
	else if (a.second[2] == b.second[2])
	{
		if (a.second[1] < b.second[1]) 
		{
			return false;
		}
		else if (a.second[1] == b.second[1])
		{
			if (a.second[0] < b.second[0])
			{
				return false;
			}
			else true;
		}
		else return true;
	}
	
	return true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	
	vector<pair<string, vector<int>>> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i].first;
		for (int j = 0; j < 3; ++j)
		{
			int tmp; cin >> tmp;
			arr[i].second.push_back(tmp);
		}
	}
	sort(arr.begin(), arr.end(), compare);

	cout << arr[0].first << "\n" << arr[n - 1].first;

	return 0;
}