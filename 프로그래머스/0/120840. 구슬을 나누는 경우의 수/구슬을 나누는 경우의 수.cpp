#include <string>
#include <vector>

using namespace std;

int combination[31][31];

int solution(int balls, int share) {
    int answer = 0;

    combination[1][0] = 1;
    combination[1][1] = 1;
    for (int i = 2; i <= 31; ++i) {
        combination[i][0] = 1;
        for (int j = 1; j <= 31; ++j) {
            combination[i][j] = combination[i - 1][j - 1] + combination[i - 1][j];
        }
    }
    
    answer = combination[balls][share];
    
    return answer;
}