#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int solution(int input)
{
    if (input == 64) return 1;

    int output = 0;
    deque<int> stick;
    stick.push_back(64);
    
    int sum = stick.front();

    while (true)
    {
        sort(stick.begin(), stick.end());

        int min = stick.front() / 2;
        stick.pop_front();

        sum = 0;
        for (int i = 0; i < stick.size(); ++i)
            sum += stick[i];
        sum += min;

        if (sum >= input)
        {
            stick.push_back(min);
        }
        else
        {
            stick.push_back(min);
            stick.push_back(min);
        }

        int result = 0;
        for (int i = 0; i < stick.size(); ++i)
        {
            result += stick[i];
        }

        if (result == input)
        {
            output = stick.size();
            break;
        }
        sum = result;
    }

    return output;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int x; cin >> x;
    cout << solution(x);

    return 0;
}