#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string s = "수";
    string p = "박";
    
    for(int i=0; i<n; i++){
        if(i%2==0) answer += s;
        else answer += p;
    }
    
    return answer;
}