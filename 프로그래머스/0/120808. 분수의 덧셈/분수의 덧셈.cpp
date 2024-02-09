#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    if (a % b == 0) return b;
    else return GCD(b, a % b);
}


vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int num1 = numer1 * denom2;
    int num2 = denom1 * denom2;
    int num3 = numer2 * denom1;
    
    int res = num1 + num3;
    
    int gcd = GCD(res, num2);
    
    res /= gcd, num2 /= gcd;
    
    answer.push_back(res); answer.push_back(num2);
    
    return answer;
}