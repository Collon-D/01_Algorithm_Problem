#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Solution(int n, int d)
{
    int answer = 0;
    vector<int> freq(10, 0);

    string str;
    for (int i = 1; i < n + 1; i++)
    {
       str = to_string(i);
       for (int j = 0; j < str.size(); j++)
       {
            freq[str[j] - '0']++;
       } 
    }

    answer = freq[d];
    return answer;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n, d;
    cin >> n >> d;
    cout << Solution(n, d);

    return 0;
}