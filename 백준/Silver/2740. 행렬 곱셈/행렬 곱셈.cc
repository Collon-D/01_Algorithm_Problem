#include <iostream>
#include <vector>

using namespace std;

void Solution()
{
    int n, m, k; 

    cin >> n >> m;
    vector<vector<int>> mat1(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cin >> m >> k; 
    vector<vector<int>> mat2(m, vector<int>(k));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> mat2[i][j];
        }
    }

    vector<vector<int>> mat3(n, vector<int>(k, 0));
    for (int x = 0; x < n; x++)
    {
       for (int y = 0; y < k; y++)
       {
            for (int i = 0; i < m; i++)
            {
                mat3[x][y] += mat1[x][i] * mat2[i][y];
            }
       } 
    }

    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < k; y++)
        {
            cout << mat3[x][y] << " ";
        }
        cout << "\n";
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution();

    return 0;
}