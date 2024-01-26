#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    bool check;
    
    for (int i = 0; i < arr.size(); ++i) {
        check = false;
        
        for (int j = 0; j < delete_list.size(); ++j) {
            if (arr[i] == delete_list[j]) check = true;
        }
        
        if (!check) answer.push_back(arr[i]);
    }
    
    return answer;
}