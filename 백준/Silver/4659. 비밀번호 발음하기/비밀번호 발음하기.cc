#include <iostream>
#include <string>

using namespace std;

void solution(string str) {
    int len = str.size();
    
    bool isValid = false;       // 모음 개수
    bool isContinuous = false;  // 연속되는가
    bool isDouble = false;      // 같은 글자가 2개 이상인가?

    int vowel = 0, consonant = 0;

    for (int i = 0; i < len; ++i) {
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            isValid = true;
            break;
        
        default:
            break;
        }

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            consonant = 0;
            vowel++;
        }
        else {
            consonant++;
            vowel = 0;
        }
        if (consonant > 2 || vowel > 2) {
            isContinuous = true;
        }

        if (str[i] == str[i + 1]) {
            if (str[i] != 'e' && str[i] != 'o') {
                isDouble = true;
            }
        }
    }

    cout << "<" << str << ">";
    if (isValid && !isContinuous && !isDouble)
        cout << " is acceptable.\n"; 
    else 
        cout << " is not acceptable.\n"; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str;

    while (true) {
        cin >> str;
        if (str == "end") break;

        solution(str);
    }

    return 0;
}