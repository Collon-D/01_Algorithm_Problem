#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int a, b, c; cin >> a >> b >> c;
	string A = to_string(a), B = to_string(b), C = to_string(c);

	cout << a + b - c << "\n";
	cout << stoi(A + B) - stoi(C);
	
	return 0;
}