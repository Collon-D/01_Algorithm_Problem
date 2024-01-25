#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    
    for (int i = 0; i < my_string.size(); ++i) {
        if ('A' <= my_string[i] && my_string[i] <= 'Z') {
            answer[my_string[i] - 'A']++;
        }
        else if ('a' <= my_string[i] && my_string[i] <= 'z') {
            answer[my_string[i] - 'a' + 26]++;
        }
    }
    
    return answer;
}