#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, b, c;
    long long int answer = 0;
    cin >> n;

    vector<int> venue(n);
    for (int i = 0; i < n; ++i) {
        cin >> venue[i];
    }
    cin >> b >> c;

    // 총감독관 인원 계산
    for (int i = 0; i < n; ++i) {
        venue[i] -= b;
        answer++;
    }

    // 부감독관 인원 계산
    for (int i = 0; i < n; ++i) {
        if (venue[i] > 0) {
            int q = venue[i] / c;
            int r = venue[i] % c;
            answer += q + (r != 0 ? 1 : 0);
        }
    }

    cout << answer;
    return 0;
}