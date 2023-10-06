#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct tInfo {
    int x, y, seq;
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int N; cin >> N;
    vector<tInfo> input(N);

    for (int i = 0; i < N; ++i) {
        cin >> input[i].x >> input[i].y;
        input[i].seq = 1;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;
            else {
                if (input[i].x < input[j].x && input[i].y < input[j].y) 
                    input[i].seq++;
            }
        }
    }

    for (int i = 0; i < N; ++i) 
        cout << input[i].seq << " ";

    return 0;
}