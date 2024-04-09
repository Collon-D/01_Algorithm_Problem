#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    string name1, name2;

    map<string, bool> m;
    m.insert({"ChongChong", 1});

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> name1 >> name2;

        if (m.find(name1) != m.end()) {
            if (m.find(name2) == m.end()) {
                m.insert({name2, 1});
            }
        }
        else if (m.find(name2) != m.end()) {
            if (m.find(name1) == m.end()) {
                m.insert({name1, 1});
            }
        }
    } 

    cout << m.size();
    return 0;
}