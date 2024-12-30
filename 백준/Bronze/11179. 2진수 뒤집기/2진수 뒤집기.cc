#include <iostream>
#include <string>

using namespace std;

int power(int a, int n)
{
	if (a == 0) return 0;

	int answer = 1;
	for (int i = 0; i < n; i++)
	{
		answer *= a;
	}
	return answer;
}

string dec2bin(int n)
{
	string answer = "";

	while (n > 0)
	{
		answer += n % 2 ? '1' : '0';
		n /= 2;
	}

	return answer;
}

int bin2dec(string n)
{
	int answer = 0;
	
	int size = n.size();
	for (int i = 0; i < size; i++)
	{
		int x = size - 1 - i;
		answer += power(2 * (n[i] - '0'), x);
	}

	return answer;
}

int Solution(int n)
{
	int answer = 0;
	
	string str = dec2bin(n);
	answer = bin2dec(str);

	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	cout <<	Solution(n);

	return 0;
}