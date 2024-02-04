#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    int i = 0;
    while (i != arr.size() && k != answer.size()) {
        if (answer.empty()) answer.push_back(arr[i++]);
        else {
            bool check = false;
            for (int j = 0; j < answer.size(); ++j) {
                if (arr[i] == answer[j]) check = true;
            }
            if (!check) answer.push_back(arr[i]);
            i++;
        }
    }
    
    int loop;
    if (answer.size() != k) {
        loop = k - answer.size();
        for (int i = 0; i < loop; ++i) answer.push_back(-1);
    }
    
    return answer;
}