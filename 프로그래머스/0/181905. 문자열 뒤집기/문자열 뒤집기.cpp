#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    
    int cnt = 0;
    for (int i = 0; i < my_string.size(); ++i) {
        if (s <= i && i <= e) {
            answer += my_string[e - cnt];
            cnt++;
        }
        else {
            answer += my_string[i];
        }
    }
    
    return answer;
}