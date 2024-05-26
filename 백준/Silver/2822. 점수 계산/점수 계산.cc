#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int answer = 0;
    vector<pair<int, int>> arr(8);
    for (int i = 0; i < 8; ++i) 
    {
        int tmp; cin >> tmp;
        arr[i] = { i + 1, tmp };
    }

    sort(arr.begin(), arr.end(), compare);
    vector<int> seq(5);
    for (int i = 0; i < 5; ++i)
    {
        answer += arr[i].second;
        seq[i] = arr[i].first;
    }
    sort(seq.begin(), seq.end());

    cout << answer << "\n";
    for (int i = 0; i < 5; ++i)
    {
        cout << seq[i] << " ";
    }

    return 0;
}