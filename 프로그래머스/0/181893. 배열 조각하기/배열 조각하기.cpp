#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    
    for (int i = 0; i < query.size(); ++i) {
        if (i & 1) {
            arr.erase(arr.begin(), arr.begin() + query[i]);
        }
        else {
            arr.erase(arr.begin() + query[i] + 1, arr.end());
        }
    }
    
    answer = arr;
    return answer;
}