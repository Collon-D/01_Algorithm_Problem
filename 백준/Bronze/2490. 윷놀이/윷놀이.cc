#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int arr[4], answer;
    for (int i = 0; i < 3; ++i) {
        answer = 0;
        for (int j = 0; j < 4; ++j) {
            cin >> arr[j];
            answer += arr[j];
        }

        switch (answer)
        {
        case 1:
            cout << "C\n";
            break;
        case 2:
            cout << "B\n";
            break;
        case 3:
            cout << "A\n";
            break;
        case 0:
            cout << "D\n";
            break;
        case 4:
            cout << "E\n";
            break;
        default:
            break;
        }
    }

    return 0;
}