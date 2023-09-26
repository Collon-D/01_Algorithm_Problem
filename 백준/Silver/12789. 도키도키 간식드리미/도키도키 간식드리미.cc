#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, tmp, seq = 1;
    bool check = false;
    vector<int> stack;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        check = false;
        if (tmp == seq) seq++;
        else {
            for (int j = stack.size() - 1; j >= 0; --j) {
                if (seq == stack[j]) {
                    stack.pop_back();
                    seq++;
                } else {
                    if (!check)
                        stack.push_back(tmp);
                    check = true;
                    break;
                }
            }
            if (!check) stack.push_back(tmp);    
        }
    }

    int size = stack.size() - 1;
    for (int i = size; i >= 0; --i) {
        if (seq == stack[i]) {
            stack.pop_back();
            seq++;
        }
    }

    if (stack.empty()) cout << "Nice";
    else cout << "Sad";

    return 0;
}