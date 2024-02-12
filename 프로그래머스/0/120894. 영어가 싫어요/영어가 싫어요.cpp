#include <string>
#include <vector>

using namespace std;

string num[10] = { "zero", "one", "two","three", "four", 
                   "five", "six", "seven", "eight", "nine" };

long long solution(string numbers) {
    long long answer = 0;
    
    string tmp = "";
    string temp = "";
    for (int i = 0; i < numbers.size(); ++i) {
        tmp += numbers[i];
        for (int j = 0; j < 10; ++j) {
            if (tmp == num[j]) {
                tmp = "";
                temp += j + '0';
            }
        }
    }
    
    answer = stoll(temp);
    
    return answer;
}