#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for (int i = 0; i < s.size(); ++i) {
        int idx = 0;
        char c = s[i];
        while (idx != index) {
            c++;
            
            if (c > 'z') c = 'a';
            
            bool check = false;
            for (int j = 0; j < skip.size(); ++j) {
                if (c == skip[j]) {
                    check = true;
                    break;
                }
            }
            idx += check ? 0 : 1;
        }
        answer += c;
    }
    
    return answer;
}