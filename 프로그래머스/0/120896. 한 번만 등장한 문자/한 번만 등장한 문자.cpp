#include <string>
#include <vector>
#include <iostream>

using namespace std;

int alpha[26];

string solution(string s) {
    string answer = "";
    
    for (int i = 0; i < s.size(); ++i) 
        alpha[s[i] - 'a']++;
    
    for (int i = 0; i < 26; ++i) {
        if (alpha[i] == 1) {
            answer += i + 'a';
        }
    }
    
    return answer;
}