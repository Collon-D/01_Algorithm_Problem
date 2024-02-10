#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string str = to_string(num);
    char target = k + '0';
    
    for (int i = 0; i < str.size(); ++i) {
        if (target == str[i]) {
            answer = i + 1;
            break;
        }    
    }
    
    return answer;
}