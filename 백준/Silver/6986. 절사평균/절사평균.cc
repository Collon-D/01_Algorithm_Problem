#include <iostream>
#include <vector>
#include <algorithm>

#define ERROR 0.00000001

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout.setf(ios::showpoint);
    cout.precision(3);

    int n, k; cin >> n >> k;
    vector<double> score(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> score[i];
    }
    sort(score.begin(), score.end());

    double mean1 = 0, mean2 = 0;
    
    // 절사평균 구하기
    for (int i = k; i < n - k; ++i) 
    {
        mean1 += score[i];
    }
    mean1 = mean1 / (n - 2 * k);

    // 보정평균 구하기
    for (int i = 0; i < k; ++i) 
    {
        score[i] = score[k];
        score[n - i - 1] = score[n - k - 1];
    }

    for (int i = 0; i < n; ++i) 
    {
        mean2 += score[i];
    }
    mean2 = mean2 / n;

    cout << mean1 + ERROR << "\n" << mean2 + ERROR;

    return 0;
}