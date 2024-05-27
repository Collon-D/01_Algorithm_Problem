#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin >> n;
    vector<pair<int, int>> arr(n);
    vector<int> answer(n, 0);
    stack<pair<int, int>> st;
    
    for (int i = 0; i < n; ++i)
    {
        int tmp; cin >> tmp;
        arr[i] = { i + 1, tmp };
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (st.empty()) 
        {
            answer[i] = 0;
            st.push(arr[i]);
        }
        else 
        {
            while (true) 
            {
                if (st.empty()) 
                {
                    answer[i] = 0;
                    st.push(arr[i]);
                    break;
                }
                
                if (arr[i].second > st.top().second) 
                {
                    st.pop();
                }
                else 
                {
                    answer[i] = st.top().first;
                    st.push(arr[i]);
                    break;
                }
            }
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        cout << answer[i] << " ";
    }
    
    return 0;
}