#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string str = to_string(age);
    
    for (int i = 0; i < str.size(); ++i) {
        answer += str[i] - '0' + 'a';
    }
    
    return answer;
}