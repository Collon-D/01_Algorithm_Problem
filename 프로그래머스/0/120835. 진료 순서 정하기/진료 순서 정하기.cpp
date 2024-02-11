#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    int size = emergency.size();
    vector<int> rank = emergency;
    sort(rank.begin(), rank.end(), greater<int>());
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (emergency[i] == rank[j]) 
                answer.push_back(j + 1);
        }
    }
    
    return answer;
}