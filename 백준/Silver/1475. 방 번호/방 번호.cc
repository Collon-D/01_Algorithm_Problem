#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str;
    cin >> str;

    int arr[9] = { 0, };

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '9') {
            arr[6]++;
        }
        else {
            arr[str[i] - '0']++;
        }
    }

    int max = 0;
    for (int i = 0; i < 9; ++i) {
        if (max < arr[i]) max = arr[i];
    }
    
    if (max == arr[6]) {    
        bool check = false;
        int six_nine = max & 1 ? max / 2 + 1 : max / 2;

        for (int i = 0; i < 9; ++i) {
            if (i != 6 && arr[i] > six_nine) {
                cout << arr[i];
                check = true;
                break;
            }
        }
        if (!check) 
            cout << six_nine;
    }
    else cout << max;

    return 0;
}