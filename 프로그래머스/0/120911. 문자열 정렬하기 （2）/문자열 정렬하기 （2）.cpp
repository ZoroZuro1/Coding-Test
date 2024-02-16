#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i] >= 'A' && my_string[i] <= 'Z') my_string[i] = my_string[i] - 'A' + 'a';
    }
    sort(my_string.begin(), my_string.end());
    
    return my_string;
}
