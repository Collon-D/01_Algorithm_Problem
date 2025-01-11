#include <iostream>

using namespace std;

#define ld long double

ld Solution(ld velocity, ld width, ld depth)
{
	int answer = -1;
	ld t = width / velocity;
	ld dd = 0;

	while (dd < depth)
	{
		answer++;
		dd += 5 * t * t;
		t *= 1.25;
	}

	return answer;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	ld V, W, D;
	cin >> V >> W >> D;
	cout << Solution(V, W, D);

	return 0;
}