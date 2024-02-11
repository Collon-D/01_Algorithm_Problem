#include <string>
#include <vector>

using namespace std;

string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

string solution(string letter) {
    string answer = "";
    
    string tmp;
    for (int i = 0; i < letter.size(); ++i) {
        if (letter[i] != ' ') {
            tmp += letter[i];
        }
        else {
            for (int j = 0; j < 26; ++j) {
                if (tmp == morse[j]) {
                    answer += j + 'a';
                    break;
                }
            }
            tmp = "";
        }
    }  
    
    for (int j = 0; j < 26; ++j) {
        if (tmp == morse[j]) {
            answer += j + 'a';
            break;
        }
    }
    
    return answer;
}