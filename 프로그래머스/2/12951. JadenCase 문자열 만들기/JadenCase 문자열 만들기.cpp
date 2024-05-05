#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int length = s.size();
    bool isLower = false, next = false;
    
    for (int i = 0; i < length; ++i) {
        isLower = next;
        next = s[i] == ' ' ? false : true;
        
        if (!isLower) {
            answer += toupper(s[i]);
            next = s[i] == ' ' ? false : true;
        }
        else {
            answer += tolower(s[i]);
        }
        
    }
    
    return answer;
}