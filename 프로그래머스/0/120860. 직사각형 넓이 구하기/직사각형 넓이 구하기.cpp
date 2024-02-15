#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    sort(dots.begin(), dots.end());
    
    int height = abs(dots[1][1] - dots[0][1]);
    int width = abs(dots[3][0] - dots[1][0]);
    
    answer = height * width;
    return answer;
}