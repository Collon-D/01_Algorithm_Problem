#include <string>
#include <vector>
#include <iostream>

using namespace std;

int power2[12] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048 };

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    int length = arr.size();
    int size = 0, loop = 0;
    for (int i = 0; i < 11; ++i) {
        if (length <= power2[i]) {
            size = power2[i];
            break;
        }
    }
    
    loop = size - length;    
    for (int i = 0; i < loop; ++i) 
        answer.push_back(0);
    
    return answer;
}