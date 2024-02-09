#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int num = 1;
    
    for(answer = 0; num * (answer+1) <= n ; answer++){
        num *= (answer+1);
    }
    
    return answer;
}