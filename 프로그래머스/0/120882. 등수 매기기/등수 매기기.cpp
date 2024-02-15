#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> mean, rate;
    
    for (vector<int> arr : score) {
        mean.push_back((arr[0] + arr[1]) / 2.0 + 0.5);
        rate.push_back((arr[0] + arr[1]) / 2.0 + 0.5);
    }
    sort(rate.begin(), rate.end(), greater<int>());
    
    for (int i = 0; i < score.size(); ++i) {
        for (int j = 0; j < score.size(); ++j) {
            if (rate[j] == mean[i]) {
                answer.push_back(j + 1);
                break;
            }
        }
    }
    
    return answer;
}