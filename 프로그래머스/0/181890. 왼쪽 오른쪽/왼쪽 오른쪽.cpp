#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    
    int idx = 0;
    bool isLeft;
    for (int i = 0; i < str_list.size(); ++i) {
        if (str_list[i] == "l") {
            idx = i;
            isLeft = true;
            break;
        }
        else if (str_list[i] == "r") {
            idx = i;
            isLeft = false;
            break;
        }
    }
    
    if (isLeft) {
        for (int i = 0; i < idx; ++i) {
            answer.push_back(str_list[i]);
        }    
    }
    else {
        for (int i = idx + 1; i < str_list.size(); ++i) {
            answer.push_back(str_list[i]);
        }
    }
    
    return answer;
}