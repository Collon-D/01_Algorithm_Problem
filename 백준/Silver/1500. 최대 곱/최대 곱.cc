#include <iostream>
#include <vector>

using namespace std;

long long Solution(int s, int k)
{
	long long answer = 1;

	int quotient = s / k;
	int remain = s % k;

	vector<int> sum(k, quotient);
	
	int i = 0;
	while (remain > 0)
	{
		++sum[i++ % k];
		remain--;
	}

	for (int i = 0; i < k; i++)
	{
		answer *= sum[i];
	}
	
	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int s, k; cin >> s >> k;
	cout << Solution(s, k);

	return 0;
}