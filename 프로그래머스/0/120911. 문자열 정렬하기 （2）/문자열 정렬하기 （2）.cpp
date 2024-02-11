#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for (int i = 0; i < my_string.size(); ++i) 
        my_string[i] = tolower(my_string[i]);
    
    for (int i = 0; i < my_string.size(); ++i) {
        for (int j = i; j < my_string.size(); ++j) {
            if (my_string[i] > my_string[j]) {
                char tmp = my_string[i];
                my_string[i] = my_string[j];
                my_string[j] = tmp;
            }
        }
    }
    
    return my_string;
}