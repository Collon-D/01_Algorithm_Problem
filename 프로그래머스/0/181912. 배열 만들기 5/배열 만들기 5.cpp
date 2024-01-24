#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    string tmp;
    
    for (int i = 0; i < intStrs.size(); ++i) {
        tmp = "";
        for (int j = s; j < s + l; ++j) {
            tmp += intStrs[i][j];
        }
        if (stoi(tmp) > k) 
            answer.push_back(stoi(tmp));
    }
    
    return answer;
}