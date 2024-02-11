#include <string>
#include <vector>

using namespace std;

int facto(int n) {
    if (n == 1) return 1;
    else return n * facto(n - 1);
}

int solution(int n) {
    int answer = 0;
    int f_arr[11];
    
    for (int i = 1; i < 11; ++i) {
        f_arr[i] = facto(i);
        
        if (n >= f_arr[i]) {
            answer = i;
        }
    }
    
    return answer;
}