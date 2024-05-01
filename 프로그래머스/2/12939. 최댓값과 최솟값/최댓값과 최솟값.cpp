#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss;
    ss.str(s);
    
    int num;
    vector<int> vec;
    while (ss >> num) {
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    
    answer += to_string(vec[0]);
    answer += " ";
    answer += to_string(vec[vec.size() - 1]);
    
    return answer;
}