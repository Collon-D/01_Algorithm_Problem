#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string str; cin >> str;
	
	stack<char> left, right;
	for (int i = 0; i < str.size(); ++i)
	{
		left.push(str[i]);
	}

	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		char c1, c2; cin >> c1;
		
		switch (c1)
		{
		case 'L':
			if (!left.empty()) 
			{
				right.push(left.top());
				left.pop();
			}
			break;
		case 'D':
			if (!right.empty()) 
			{
				left.push(right.top());
				right.pop();
			}
			break;
		case 'B':
			if (!left.empty())
			{
				left.pop();
			}
			break;
		case 'P':
			cin >> c2;
			left.push(c2);
			break;
		default:
			break;
		}
	}

	while (!left.empty()) 
	{
		right.push(left.top());
		left.pop();
	}

	while (!right.empty())
	{
		cout << right.top();
		right.pop();
	}

	return 0;
}