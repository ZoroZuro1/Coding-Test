#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    int temp = 0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' ') {
            answer.push_back(' ');
            temp = 0;
        }
        else if(temp%2 == 0){
            answer.push_back(toupper(s[i]));
            temp++;
        }
        else {
            answer.push_back(tolower(s[i]));
            temp++;
        }
    }
    
    return answer;
}