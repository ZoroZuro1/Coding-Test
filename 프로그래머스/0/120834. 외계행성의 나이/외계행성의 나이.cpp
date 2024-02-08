#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string ageStr = to_string(age);
    
    for(int i=0; i < ageStr.size() ; i++){
        answer.push_back(ageStr[i] - '0' + 'a');
    }
    
    return answer;
}