#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    string tmp = "";
    int cnt = 0;
    for (int i = 0; i < my_str.size(); i++) {
        tmp += my_str[i];
        cnt++;
        
        if (cnt == n) {
            answer.push_back(tmp);
            tmp = "";
            cnt = 0;
        }
    }
    
    if (!tmp.empty()) answer.push_back(tmp);
    
    return answer;
}