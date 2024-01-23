#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    bool check;
    
    for (int i = 0; i < my_string.size(); ++i) {
        check = false;
        
        for (int j = 0; j < indices.size(); ++j) {
            if (indices[j] == i) {
                check = true;
                break;
            }
        }
        
        if (!check) answer += my_string[i];
    }
    
    return answer;
}