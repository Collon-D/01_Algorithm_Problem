#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define SCORE 100

vector<int> mushroom(10, 0);

int Solution()
{
    vector<int> acc_sum;

    for (int i = 10; i > 0; i--)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += mushroom[j];
        }
        acc_sum.push_back(sum);
    }
    sort(acc_sum.begin(), acc_sum.end());

    int answer = 0;

    if (find(acc_sum.begin(), acc_sum.end(), SCORE) != acc_sum.end())
    {
        answer = SCORE;
        return answer;
    }
    else
    {
        int diff = abs(SCORE - acc_sum[0]);
        answer = acc_sum[0];
        for (int i = 1; i < acc_sum.size(); i++)
        {
            if (abs(SCORE - acc_sum[i]) <= diff)
            {
                answer = acc_sum[i];
                diff = abs(SCORE - acc_sum[i]);
            }
        }
    }

    return answer;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 10; i++)
        cin >> mushroom[i];

    cout << Solution();

    return 0;
}