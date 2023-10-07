#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int seq[8001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n; cin >> n;
    vector<int> input(n);
    double arith = 0.;

    for (int i = 0; i < n; ++i) {
        cin >> input[i];
        arith += input[i];
        seq[4000 - input[i]]++;
    }
    sort(input.begin(), input.end());

    int freq = 0, max_value = 0; bool second = false;
    for (int i = 8000; i >= 0; --i) {
        if (!second && max_value == seq[i]) {
            second = true;
            freq = 4000 - i;
        }
        if (max_value < seq[i]) {
            max_value = seq[i];
            second = false;
            freq = 4000 - i;
        }
    }

    arith = arith < 0 ? (int)(arith / n - 0.5) : (int)(arith / n + 0.5);

    cout << arith << "\n";
    cout << input[n / 2] << "\n";
    cout << freq << "\n";
    cout << input[n - 1] - input[0] << "\n";

    return 0;
}