#include <iostream>
#include <string>

using namespace std;

void Solution(string input)
{
	int size = input.size();
	bool check = false;

	if (input == "1")
	{
		cout << "NO";
		return;
	}

	for (int i = 0; i < size; i++)
	{
		int num1 = 1, num2 = 1;

		int k = i;
		for (int j = 0; j <= k; j++)
		{
			num1 *= input[j] - '0';
		}

		for (int j = k + 1; j < size; j++)
		{
			num2 *= input[j] - '0';
		}

		if (num1 == num2)
		{
			check = true;
			break;
		}
	}

	if (check)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string input; cin >> input;
	Solution(input);

	return 0;
}