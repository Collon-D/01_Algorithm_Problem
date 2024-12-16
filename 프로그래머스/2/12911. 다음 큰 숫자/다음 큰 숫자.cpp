#include <string>
#include <vector>

using namespace std;

int CountBinary(int value)
{
   	int cnt = 0; 
    
    while (value != 0)
    {
        cnt += value % 2 ? 1 : 0; 
        value /= 2;
    }
    
   	return cnt;
}

int solution(int n) {
    int cnt = CountBinary(n);
    int next_num = n + 1;
  	
    while (CountBinary(next_num) != cnt)
    {
       next_num++; 
    }
    
    return next_num;
}