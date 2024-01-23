#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int size = my_string.size() / m;
    vector<string> tmp(size);
    
    int cnt = -1;
    for (int i = 0; i < my_string.size(); ++i) {
        if (i % m == 0) cnt++;
        tmp[cnt] += my_string[i];
    }
    
    for (int i = 0; i < size; ++i) {
        answer += tmp[i][c - 1];
    }
    
    return answer;
}