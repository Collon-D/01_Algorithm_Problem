#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    if (b > a) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    if (a % b == 0) return b;
    else return GCD(a % b, b);
}

int solution(int n) {
    return n / GCD(n, 6);
}