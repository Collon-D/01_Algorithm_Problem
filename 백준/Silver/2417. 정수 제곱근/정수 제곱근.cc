#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;

long long result;

long long binarysearch(long long left, long long right, long long find) {

	while (left <= right)
	{
		long long mid = (left + right) / 2;
		if (pow(mid, 2) >= find)
		{
			result = mid;
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return result;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	cout << binarysearch(0, 3037000500, n) << "\n";
}