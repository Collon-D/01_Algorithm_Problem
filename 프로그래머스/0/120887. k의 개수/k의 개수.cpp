#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    char target = k + '0';
    for (i; i <= j; ++i) {
        string tmp = to_string(i);
        
        for (int l = 0; l < tmp.size(); ++l) {
            if (tmp[l] == target) answer++;
        }
    }
    
    return answer;
}