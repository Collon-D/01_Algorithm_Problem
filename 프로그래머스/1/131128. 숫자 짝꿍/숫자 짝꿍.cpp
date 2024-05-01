#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int x_num[10], y_num[10];

string solution(string X, string Y) {
    string answer = "";
    
    for (int i = 0; i < X.size(); ++i) {
        x_num[X[i] - '0']++;
    }
    for (int i = 0; i < Y.size(); ++i) {
        y_num[Y[i] - '0']++;
    }
    
    for (int i = 0; i < 10; ++i) {
        int big = x_num[i] >= y_num[i] ? y_num[i] : x_num[i];
        for (int j = 0; j < big; ++j) {
            answer += i + '0';
        }
    }
    
    if (answer.empty()) {
        answer = "-1";
    }
    else {
        sort(answer.begin(), answer.end(), greater<char>());
        if (answer[0] == '0') answer = "0";
    }
        
    return answer;
}