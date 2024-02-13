#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    answer.push_back(my_string[0]);
    
    for(int i=1; i<my_string.size(); i++){
        for(int j=0; j<answer.size(); j++){
            if(answer[j] == my_string[i]){
                break;
            }
            else if(j == answer.size()-1) answer.push_back(my_string[i]);
        }
    }
    
    return answer;
}