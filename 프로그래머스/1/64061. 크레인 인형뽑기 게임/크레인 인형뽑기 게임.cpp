#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;
    
    for (int i = 0; i < moves.size(); ++i) {
        for (int j = 0; j < board.size(); ++j) {
            if (board[j][moves[i] - 1] == 0) {
                continue;
            }
            else {
                int val = board[j][moves[i] - 1];
                board[j][moves[i] - 1] = 0;
                
                // 스택에 삽입
                if (st.empty()) {
                    st.push(val);
                }
                else {
                    if (st.top() == val) {
                        st.pop();
                        answer += 2;
                    }
                    else {
                        st.push(val);
                    }
                }
                
                break;
            }
        }
    }
    
    return answer;
}