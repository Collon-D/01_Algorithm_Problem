#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    string tmp = "";
    for (int i = 0; i < myStr.size(); ++i) 
    {
        switch (myStr[i]) 
        {
            case 'a':
            case 'b':
            case 'c':
                if (!tmp.empty()) {
                    answer.push_back(tmp);
                }
                tmp = "";
                break;
            default:
                tmp += myStr[i];
                break;
        }
    }
    if (!tmp.empty()) answer.push_back(tmp);
    
    if (answer.size() == 0) answer.push_back("EMPTY");
    return answer;
}