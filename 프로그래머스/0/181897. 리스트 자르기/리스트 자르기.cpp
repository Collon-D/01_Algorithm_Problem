#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int a = slicer[0], b = slicer[1], c = slicer[2];
    
    switch(n) {
        case 1: {
            for (int i = 0; i <= b; ++i) {
                answer.push_back(num_list[i]);
            }
            break;
        }
        case 2: {
            for (int i = a; i < num_list.size(); ++i) {
                answer.push_back(num_list[i]);
            }
            break;
        }
        case 3: {
            for (int i = a; i <= b; ++i) {
                answer.push_back(num_list[i]);
            }
            break;
        }
        case 4: {
            for (int i = a; i <= b; i += c) {
                answer.push_back(num_list[i]);
            }
            break;
        }
    }
    
    return answer;
}