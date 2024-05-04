#include <string>
#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;
    
    answer = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        answer = lcm(answer, arr[i]);
    }
    
    return answer;
}