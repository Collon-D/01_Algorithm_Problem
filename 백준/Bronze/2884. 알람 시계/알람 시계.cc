#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int H, M;
    cin >> H >> M;

    if (M >= 45) M -= 45;
    else {
        if (H == 0) {
            H = 23;
            M += 15;
        }
        else {
            H -= 1;
            M += 15;
        }
    } 
    cout << H << " " << M;

    return 0;
}