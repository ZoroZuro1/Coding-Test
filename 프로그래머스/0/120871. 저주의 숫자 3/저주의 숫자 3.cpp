#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string temp ="";
    
    for(int i=0; i<n; i++){
        answer++;
        temp = to_string(answer);
        while(temp.find("3") != string::npos || answer%3 == 0){
            answer++;
            temp = to_string(answer);
        }
        
    }
    
    return answer;
}