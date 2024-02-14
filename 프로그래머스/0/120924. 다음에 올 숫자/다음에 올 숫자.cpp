#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;

    int size = common.size();
    if (common[2] - common[1] == common[1] - common[0]) {
        answer =  common[0] + size * (common[1] - common[0]);
    }
    else {
        answer = common[0] * pow(common[1] / common[0], size);
    }
    
    return answer;
}