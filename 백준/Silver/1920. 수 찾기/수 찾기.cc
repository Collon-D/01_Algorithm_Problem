#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int>& _arr, int _target, int _start, int _end) {
    if (_start > _end) return 0;

    int mid = (_start + _end) / 2;

    if (_arr[mid] == _target) return 1;
    else if (_arr[mid] < _target) return binary_search(_arr, _target, mid + 1, _end);
    else if (_arr[mid] > _target) return binary_search(_arr, _target, _start, mid - 1);
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;

    cin >> N;
    vector<int> input(N);
    for (int i = 0; i < N; ++i) 
        cin >> input[i];
    sort(input.begin(), input.end());

    cin >> M;
    vector<int> output(M);
    for (int i  = 0; i < M; ++i) {
        cin >> output[i];    
        cout << binary_search(input, output[i], 0, input.size() - 1) << "\n";
    }

    return 0;
}