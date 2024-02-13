#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = (M * N) != 1 ? M * N - 1 : 0;
    return answer;
}