#include <string>
#include <vector>

using namespace std;

bool isCompositeNumber(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0) return true;
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    
    for(int i=3; i <= n; i++){
        if(isCompositeNumber(i)) answer++;
    }
    
    return answer;
}