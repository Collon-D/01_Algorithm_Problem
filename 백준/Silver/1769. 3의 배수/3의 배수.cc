#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string num; cin >> num;
	int answer = 0;
	bool check = false, c1 = num.size() == 1 ? true : false;

	while (true)
	{
		int number = 0;
		for (int i = 0; i < num.size(); ++i)
		{
			number += num[i] - '0';
		}
		num = to_string(number);

		answer++;

		if (number < 10) 
		{
			check = (number % 3 == 0) ? true : false;
			break;
		}	
	}

	answer = c1 ? 0 : answer;

	cout << answer << "\n";
	if (check) 
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}

	return 0;
}