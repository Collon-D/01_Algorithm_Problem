#include <iostream>
#include <cstring>

using std::cout;
using std::cin;

#define MAX_SIZE 16

int main()
{
	char chArr[MAX_SIZE] = { 0, };
	int iTime = 0;
	cin >> chArr;

	int iLen = strlen(chArr);

	// 대문자 아스키코드 A ~ Z (65 ~ 90)
	for (int i = 0; i < iLen; ++i)
	{
		if ('A' == chArr[i] || 'B' == chArr[i] || 'C' == chArr[i])
		{
			iTime += 3;
		}
		else if ('D' == chArr[i] || 'E' == chArr[i] || 'F' == chArr[i])
		{
			iTime += 4;
		}
		else if ('G' == chArr[i] || 'H' == chArr[i] || 'I' == chArr[i])
		{
			iTime += 5;
		}
		else if ('J' == chArr[i] || 'K' == chArr[i] || 'L' == chArr[i])
		{
			iTime += 6;
		}
		else if ('M' == chArr[i] || 'N' == chArr[i] || 'O' == chArr[i])
		{
			iTime += 7;
		}
		else if ('P' == chArr[i] || 'Q' == chArr[i] || 'R' == chArr[i] || 'S' == chArr[i])
		{
			iTime += 8;
		}
		else if ('T' == chArr[i] || 'U' == chArr[i] || 'V' == chArr[i])
		{
			iTime += 9;
		}
		else if ('W' == chArr[i] || 'X' == chArr[i] || 'Y' == chArr[i] || 'Z' == chArr[i])
		{
			iTime += 10;
		}
	}

	cout << iTime << "\n";


	return 0;
}