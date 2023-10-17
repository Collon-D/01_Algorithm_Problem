#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int a, b; cin >> a >> b;
    int tmp;
    map<int, bool> A, B;

    for (int i = 0; i < a; ++i) {
        cin >> tmp;
        A.insert(make_pair(tmp, true));
    }
    for (int i = 0; i < b; ++i) {
        cin >> tmp;
        if (A.find(tmp) != A.end()) {
            A.erase(tmp);
        }
        else {
            B.insert(make_pair(tmp, true));
        }
    }
    
    cout << A.size() + B.size() << "\n";
    return 0;
}