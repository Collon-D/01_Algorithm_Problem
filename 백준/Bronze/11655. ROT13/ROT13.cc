#include <iostream>
#include <string>

using namespace std;

char ROT13(char c)
{
	if (isalpha(c))
	{
		if (isupper(c))
		{
			c = (((c - 'A') + 13) % 26) + 'A';
		}
		else
		{
			c = (((c - 'a') + 13) % 26) + 'a';
		}
	}
	
	return c;
}

void Solution()
{
	string str; getline(cin, str);

	string answer = "";
	for (char c : str)
	{
		answer += ROT13(c);
	}

	cout << answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	Solution();

	return 0;
}