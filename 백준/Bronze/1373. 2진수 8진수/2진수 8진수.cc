#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Solution(string input)
{
    if (input.size() % 3 == 1)
    {
        input.insert(0, "00");
    }
    else if (input.size() % 3 == 2)
    {
        input.insert(0, "0");
    }

    int size = input.size();
    for (int i = 0; i < size; i += 3)
    {
        string str = "";
        str += input[i];
        str += input[i + 1];
        str += input[i + 2];

        if (str == "000") cout << 0;
        else if (str == "001") cout << 1;
        else if (str == "010") cout << 2;
        else if (str == "011") cout << 3;
        else if (str == "100") cout << 4;
        else if (str == "101") cout << 5;
        else if (str == "110") cout << 6;
        else if (str == "111") cout << 7;
    } 
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input; cin >> input;
    Solution(input);

    return 0;
}

