#include <stdio.h>
int sumCycle(int n, int x, int y, int sum, int cnt)
{
	int rslt[2];

	sum = x + y;

	rslt[0] = y;
	rslt[1] = sum % 10;

	if(rslt[0] == n / 10 && rslt[1] == n % 10) // 결과가 원래의 수와 같아지면
		return cnt+1;
	else {
		sum = rslt[0] * 10 + rslt[1];
		return cnt += sumCycle(n, rslt[0], rslt[1], sum, cnt++);
        
	}
}
int main(void)
{
	int n, x, y, sum, cycle;
	int rslt[2];

	scanf("%d", &n); // n < 100

	x = n / 10;
	y = n % 10;
	cycle = sumCycle(n, x, y, x+y, 0);

	printf("%d", cycle);

}