#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 1;
    
    int index = is_suffix.size() - 1;
    for (int i = my_string.size() - 1; i >= 0; --i) {
        if (my_string[i] != is_suffix[index--]) answer = 0;
        if (index < 0) break;
    }
    
    if (my_string.size() < is_suffix.size()) answer = 0;
    
    return answer;
}