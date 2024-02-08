#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(int i=0; i<rsp.size(); i++){
        if(rsp[i] == '2') answer.push_back('0');
        if(rsp[i] == '0') answer.push_back('5');
        if(rsp[i] == '5') answer.push_back('2');
    }
    return answer;
}