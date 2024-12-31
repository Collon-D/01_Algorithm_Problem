#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void Solution(int n)
{
	for (int i = 0; i < n; i++)
	{
		string str, temp; getline(cin, str);
		stringstream ss(str);
		vector<string> vec;

		while (ss >> temp)
		{
			vec.push_back(temp);
		}

		for (int j = 0; j < vec.size(); j++)
			reverse(vec[j].begin(), vec[j].end());
		
		for (int j = 0; j < vec.size(); j++)
			cout << vec[j] << " ";
		cout << "\n";
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n; cin >> n;
	cin.ignore();
	Solution(n);

	return 0;
}