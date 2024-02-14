#include <string>
#include <vector>

using namespace std;

int num[1000];

int solution(vector<int> array) {
    int answer = 0;
    
    int same = 0, idx = 0, max = 0;
    for (int i = 0; i < array.size(); ++i) 
        num[array[i]]++;
    
    for (int i = 0; i < 1000; ++i) {
        if (idx < num[i]) {
            idx = num[i];
            max = i;
        }
    }
    
    for (int i = 0; i < 1000; ++i) {
        if (idx == num[i]) same++;
    }
    
    if (same > 1) answer = -1;
    else answer = max;
    
    return answer;
}