#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int n = board.size();
    
    int dh[4] = { 0, 1, -1, 0 }, dw[4] = { 1, 0, 0, -1 };
    for (int i = 0; i <= 3; ++i) {
        int h_check = h + dh[i], w_check = w + dw[i];
        
        if (0 <= h_check && h_check < n &&
            0 <= w_check && w_check < n) {
            if (board[h][w] == board[h_check][w_check])
                answer++;
        }
    }
    
    return answer;
}