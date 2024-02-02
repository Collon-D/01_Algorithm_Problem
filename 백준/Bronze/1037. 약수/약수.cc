#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, answer, tmp;
    vector<int> measure;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        measure.push_back(tmp);
    }
    sort(measure.begin(), measure.end());

    answer = measure.front() * measure.back();
    cout << answer << "\n";

    return 0;
}