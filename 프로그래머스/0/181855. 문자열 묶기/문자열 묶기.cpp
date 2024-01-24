#include <string>
#include <vector>

using namespace std;

int length[30] = { 0, };

int solution(vector<string> strArr) {
    int answer = 0;
    
    for (int i = 0; i < strArr.size(); ++i) {
        length[strArr[i].size() - 1]++;
    }
    
    for (int i = 0; i < 30; ++i) {
        if (answer < length[i]) answer = length[i];
    }
    
    return answer;
}