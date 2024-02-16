#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    
    int x = board[0] / 2;
    int y = board[1] / 2;
    
    for (int i = 0; i < keyinput.size(); ++i) {
        if (keyinput[i] == "left" && answer[0] > -1 * x) {
            answer[0] -= 1; 
        }
        else if (keyinput[i] == "right" && answer[0] < x) {
            answer[0] += 1;
        }
        else if (keyinput[i] == "up" && answer[1] < y) {
            answer[1] += 1;
        }
        else if (keyinput[i] == "down" && answer[1] > -1 * y) {
            answer[1] -= 1;  
        } 
    }
    
    return answer;
}