#include <string>
#include <vector>

using namespace std;

int dp[101];

int solution(int n) {
    int cnt = 1;
    for (int i = 1; i < 101; ++i) {
        dp[i] = cnt;
        
        while (true) 
        {
            cnt++;
            string tmp = to_string(cnt);
            
            if (cnt % 3 != 0 && tmp.find("3") == string::npos) break;
        }
    }
    
    return dp[n];
}