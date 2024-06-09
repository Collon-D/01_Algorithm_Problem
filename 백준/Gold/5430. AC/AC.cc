#include <iostream>
#include <deque>
#include <string>

using namespace std;

deque<string> dq;

string solution(string func, string arr)
{
	dq.clear();
	string answer = "", tmp = "";
	for (int i = 1; i < arr.size() - 1; ++i)
	{	
		if (arr[i] != ',') 
		{
			tmp += arr[i];
		}
		else
		{
			dq.push_back(tmp);
			tmp = "";
		}
	}
	if (!tmp.empty())
		dq.push_back(tmp);

	bool front = true;
	for (int i = 0; i < func.size(); ++i)
	{
		if (func[i] == 'R') 
		{
			front = !front;
		}
		else 
		{
			if (!dq.empty())
			{
				if (front)
				{
					dq.pop_front();
				}
				else
				{
					dq.pop_back();
				}
			}
			else
			{
				answer = "error";
				return answer;
			}
		}
	}

	answer += '[';
	if (front) 
	{
		for (int i = 0; i < dq.size(); ++i)
		{
			answer += dq[i];
			if (i != dq.size() - 1)
				answer += ',';
		}
	}
	else
	{
		for (int i = dq.size() - 1; i >= 0; --i)
		{
			answer += dq[i];
			if (i != 0)
				answer += ',';
		}
	}
	answer += ']';

	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t, n; cin >> t;
	string func, arr;

	for (int i = 0; i < t; ++i)
	{
		cin >> func >> n;
		cin >> arr;

		cout << solution(func, arr) << "\n";
	}

	return 0;
}