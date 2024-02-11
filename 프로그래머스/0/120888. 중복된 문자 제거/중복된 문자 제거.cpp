#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    answer += my_string[0];
    
    for (int i = 0; i < my_string.size(); ++i) {
        bool check = false;
        
        for (int j = 0; j < answer.size(); ++j) {
            if (answer[j] == my_string[i]) {
                check = true;
                break;
            }
        }
        
        if (!check) answer += my_string[i];
    }
    
    return answer;
}