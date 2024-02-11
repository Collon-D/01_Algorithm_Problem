#include <string>
#include <vector>

using namespace std;

char A[26];
char B[26];

int solution(string before, string after) {
    int answer = 1;
    
    for (int i = 0; i < before.size(); ++i) {
        A[before[i]- 'a']++;
        B[after[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; ++i) {
        if (A[i] != B[i]) {
            answer = 0;
            break;
        }
    }
    
    return answer;
}