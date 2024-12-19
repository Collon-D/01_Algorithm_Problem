#include <iostream>
#include <vector>
#include <string>
#include <deque>

using namespace std;

#define ALPHA_NUM 26

void Solution(string input)
{
    deque<char> answer;
    vector<char> str(ALPHA_NUM, 0);
    
    for (int i = 0; i < input.size(); i++)
    {
        str[input[i] - 'A']++;
    }

    // 중심이 될 문자 판단 - 개수가 가장 많으며 홀수개인 문자
    int mid_idx = 0, max = 0;
    for (int i = 0; i < ALPHA_NUM; i++)
    {
        if (str[i] & 1 && str[i] > max)
        {
           max = str[i];
           mid_idx = i; 
        }
    }

    // 문자 개수를 통해 홀수 짝수 구분하여 홀수일 경우에만 중심 문자로 삽입
    if (max & 1)
    {
        answer.push_back(mid_idx + 'A');
        str[mid_idx]--;
    }

    // 알파벳 역순으로 문자들을 앞/뒤로 삽입하기
    for (int i = ALPHA_NUM - 1; i >= 0; i--)
    {
        bool check = false;
        while (str[i] > 0)
        {
            if (str[i] & 1)
            {
                check = true;
                break;
            }
                

            answer.push_front(i + 'A');
            answer.push_back(i + 'A'); 
            str[i] -= 2;
        }

        if (check)
        {
            cout << "I'm Sorry Hansoo";
            return;
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    string input; cin >> input;
    Solution(input);

    return 0;
}