#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define SIZE 45

int fibbo[SIZE] = { 0, 1, };

void Fibbo()
{
    for (int i = 2; i < SIZE; i++)
    {
        fibbo[i] = fibbo[i - 1] + fibbo[i - 2];
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    Fibbo();

    int n, k; cin >> n;
    for (int i = 0; i < n; ++i)
    {
        vector<int> answer;
        cin >> k;
        for (int j = SIZE - 1; j > 1; j--)
        {
            if (k >= fibbo[j])
            {
                k -= fibbo[j];
                answer.push_back(fibbo[j]); 

                if (k <= 0) break;
            }
        }
        sort(answer.begin(), answer.end());

        for (int j = 0; j < answer.size(); j++)
        {
            cout << answer[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}