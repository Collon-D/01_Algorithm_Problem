#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) 
{
    return a.first < b.first;
}

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    vector<pair<int, int>> seq;
    
    int len = rank.size();
    for (int i = 0; i < len; ++i) 
    {
        if (attendance[i]) {
            seq.push_back({rank[i], i});
        }    
    }
    sort(seq.begin(), seq.end(), compare);
    
    answer = (10000 * seq[0].second) + (100 * seq[1].second) + seq[2].second;
    return answer;
}