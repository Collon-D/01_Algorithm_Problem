#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n; cin >> n;
    string name, act;
    map<string, bool, greater<string>> company;

    for (int i = 0; i < n; ++i) {
        cin >> name >> act;
        if (act == "enter")
            company.insert(make_pair(name, true));
        else if (act == "leave")
            company.erase(name);
    }

    for (auto i = company.begin(); i != company.end(); ++i) {
        cout << i->first << "\n";
    }
    
    return 0;
}