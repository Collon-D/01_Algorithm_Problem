#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i = 2; i <= n; ++i) {
        bool check = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                check = false;
                break;
            }
        }
        answer += check ? 1 : 0;
    }
    
    return answer;
}