#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; char game;
    cin >> n >> game;

    map<string, bool> m;

    int people = 0, answer = 0;
    string name;
    for (int i = 0; i < n; ++i) {
        cin >> name;

        if (m.find(name) == m.end()) {
            people++;
            m.insert({name, true});
        }

        switch (game)
        {
        case 'Y':
            if (people == 1) {
                answer++;
                people = 0;
            }
            break;
        case 'F':
            if (people == 2) {
                answer++;
                people = 0;
            }
            break;
        case 'O':
            if (people == 3) {
                answer++;
                people = 0;
            }
            break;    
        default:
            break;
        }
    }

    cout << answer;
    return 0;
}