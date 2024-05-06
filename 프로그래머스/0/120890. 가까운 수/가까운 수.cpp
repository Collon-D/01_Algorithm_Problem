#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    
    for (int i = 1; i < array.size(); ++i) {
        if (abs(array[i] - n) < abs(answer - n)) {
            answer = array[i];
        }
        else if (abs(array[i] - n) == abs(answer - n)) {
            answer = array[i] < answer ? array[i] : answer;
        }
    }
    
    return answer;
}