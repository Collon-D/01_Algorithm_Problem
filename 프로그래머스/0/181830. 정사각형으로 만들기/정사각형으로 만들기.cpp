#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int cols = arr.size();
    int rows = arr[0].size();
    for (int i = 1; i < arr.size(); ++i) {
        rows = rows < arr[i].size() ? arr[i].size() : rows;
    }
    
    int longest = cols > rows ? cols : rows;
    
    vector<vector<int>> answer(longest, vector<int>(longest, 0));
    
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            answer[i][j] = arr[i][j];
        }
    }
    
    return answer;
}