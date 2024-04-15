#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    vector<int> button(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> button[i];

    int person, gender, num, j;
    cin >> person;
    for (int i = 0; i < person; ++i) {
        cin >> gender >> num;

        switch (gender)
        {
        case 1:
            for (int i = num; i <= n; i += num) {
                button[i] = !button[i];
            }
            break;
        case 2:
            j = 1;
            while (true) {
                if (button[num + j] == button[num - j] && num - j > 0 && num + j <= n) {
                    button[num + j] = button[num - j] = !button[num + j];
                }
                else {
                    button[num] = !button[num];
                    break;
                }
                j++;
            }
            break;        
        default:
            break;
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (i % 20 == 1 && i != 1) cout << "\n";
        cout << button[i] << " ";
    }

    return 0;
}