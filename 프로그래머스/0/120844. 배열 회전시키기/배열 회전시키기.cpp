#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    
    int left = numbers[0];
    int right = numbers[numbers.size() - 1];
    
    if (direction == "left") {
        for (int i = 1; i < numbers.size(); ++i) 
            answer.push_back(numbers[i]);
        answer.push_back(left);
    }
    else {
        answer.push_back(right);
        for (int i = 0; i < numbers.size() - 1; ++i) {
            answer.push_back(numbers[i]);
        }
    }
    
    return answer;
}