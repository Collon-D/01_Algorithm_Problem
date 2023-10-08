#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    int loop = a.length() >= b.length() ? a.length() - 1 : b.length() - 1;
    int idx = a.length() < b.length() ? a.length() - 1 : b.length() - 1;

    string l = a.length() >= b.length() ? a : b;
    string s = a.length() < b.length() ? a : b;

    for (int i = loop; i >= 0; --i) {
        if (idx >= 0) {
            l[i] += s[idx--];
            
            if (96 <= l[i] && l[i] <= 105) l[i] -= 48;
            else if (i == 0 && l[i] >= 106) {
                l[i] -= 58;
                l = '1' + l;
            }
            else {
                l[i] -= 58;
                l[i - 1] += 1;
            }
        }
        else {
            if (i == 0 && l[i] >= 58) {
                l[i] = '0';
                l = '1' + l;
            }
            else if (l[i] >= 58) {
                l[i] = '0';
                l[i - 1] += 1;
            }
        }
    }
    cout << l;
    return 0;
}