#include <iostream>

using namespace std;

#define size 10001
#define ull unsigned long long int

ull fibbo[size] = { 0, 1 };

void setdp() {
    for (int i = 2; i < size; ++i) 
        fibbo[i] = fibbo[i - 1] + fibbo[i - 2];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    setdp();

    int n;
    cin >> n;
    cout << fibbo[n];

    return 0;
}